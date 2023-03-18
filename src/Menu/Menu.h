#ifndef Menu_h
#define Menu_h

#include <Arduino.h>
#include <vector>

class MenuManager;

class IMenuComponent {
 public:
  static MenuManager* menuManagerPtr;
  static void setMenuManager(MenuManager* newMenuManager);
  IMenuComponent* previous = nullptr;
  virtual void display() {}
  virtual void subDisplay() {}
  virtual void up() {}
  virtual void down() {}
  virtual void left() {}
  virtual void right() {}
};

class Menu : public IMenuComponent {
 public:
  const char* name;
  std::vector<IMenuComponent*> children;
  uint8_t index = 0;

  void display() override;
  void subDisplay() override;

  void up() override;
  void down() override;
  void left() override;
  void right() override;
  Menu(const char* name, std::vector<IMenuComponent*>&& vector);
};

class LEDSettingsItem : public IMenuComponent {
 public:
  const char* name;
  byte& param;


  void display() override;
  void subDisplay() override;

  void up() override;
  void down() override;
  void left() override;
  void right() override;

  LEDSettingsItem(const char* name, byte& param);
};

#endif