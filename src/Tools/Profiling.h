#ifndef Profiler_h
#define Profiler_h

// #define PROFILING
#define PROFILE_RESULTS_MAX 10000

#ifdef PROFILING
struct ProfileResult {
  const char* name;
  uint32_t startTime, endTime;
};

class Profiler {
 private:
  uint16_t resultCount;
  bool bufferFull = false;

 public:
  ProfileResult results[PROFILE_RESULTS_MAX];

  void beginSession() {
    Serial.println(F("Profiling..."));
    Serial.println();

    resultCount = 0;
    bufferFull = false;
  }

  void endSession() {
    printHeader();
    printResults();
    printFooter();

    resultCount = 0;

    Serial.println();
    Serial.println(F("Profiling Complete!"));
    Serial.println(F("Save the above as a JSON file"));
    Serial.println(F("And upload to Chrome://tracing"));
  }

  void saveResult(const ProfileResult& result) {
    if (resultCount < PROFILE_RESULTS_MAX)
      results[resultCount++] = result;
    else
      bufferFull = true;
  }

  void printResults() {
    for (uint16_t i = 0; i < resultCount; i++) {
      delay(10);
      Serial.println(F("{"));
      Serial.println(F("\"cat\":\"function\","));
      Serial.print(F("\"dur\":"));
      Serial.print(results[i].endTime - results[i].startTime);
      Serial.println(F(","));
      Serial.print(F("\"name\":\""));
      Serial.print(results[i].name);
      Serial.println(F("\","));
      Serial.println(F("\"ph\":\"X\","));
      Serial.println(F("\"pid\":0,"));
      Serial.println(F("\"tid\":0,"));
      Serial.print(F("\"ts\":"));
      Serial.println(results[i].startTime);

      if (i < resultCount - 1)
        Serial.println(F("},"));
      else
        Serial.println(F("}"));
    }
  }

  void printHeader() {
    Serial.println(F("{\"otherData\": {},\"traceEvents\":["));
  }

  void printFooter() {
    Serial.println(F("]}"));
    if (bufferFull)
      Serial.println(F("Result Buffer Maxed Out"));
  }

  static Profiler& get() {
    static Profiler instance;
    return instance;
  }
};

class ProfileTimer {
 public:
  ProfileTimer(const char* name)
   : name(name), startTime(micros()) {}

  ~ProfileTimer() {
    Profiler::get().saveResult({ name, startTime, micros() });
  }

 private:
  const char* name;
  const uint32_t startTime;
};
#endif

#ifdef PROFILING
  #define STRINGIFY(x) #x
  #define TOSTRING(x) STRINGIFY(x)

  #define PROFILE_BEGIN() Profiler::get().beginSession();
  #define PROFILE_FUNCTION() ProfileTimer timer##__LINE__(__PRETTY_FUNCTION__);
  #define PROFILE_SCOPE(name) ProfileTimer timer##__LINE__(name);
  #define PROFILE_SCOPE_DEFAULT() ProfileTimer timer##__LINE__(__FILE__ " Line[" TOSTRING(__LINE__) "]");
  #define PROFILE_END() Profiler::get().endSession();
#else
  #define PROFILE_BEGIN()
  // #define PROFILE_FUNCTION() Serial.println(__PRETTY_FUNCTION__);
  #define PROFILE_FUNCTION()
  #define PROFILE_SCOPE(name)
  #define PROFILE_SCOPE_DEFAULT()
  #define PROFILE_END()
#endif

#endif
