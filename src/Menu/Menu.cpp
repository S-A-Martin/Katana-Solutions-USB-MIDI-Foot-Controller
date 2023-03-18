
#include "Menu.h"
#include "Commands/Commands.h"
#include "MenuManager.h"
#include "Tools/Profiling.h"
#include <LiquidCrystal_I2C.h>
extern LiquidCrystal_I2C lcd;

MenuManager* IMenuComponent::menuManagerPtr;
void IMenuComponent::setMenuManager(MenuManager* newMenuManager) { menuManagerPtr = newMenuManager; }

/////

void Menu::display() {
  PROFILE_FUNCTION();
  lcd.clear();
  lcd.print(name);
  if (children[index]) {
    lcd.setCursor(0, 1);
    children[index]->subDisplay();
  }
}
void Menu::subDisplay() {
  lcd.print(name);
}

void Menu::up() {
  PROFILE_FUNCTION();
  index = 0;
  if (previous)
    menuManagerPtr->setActiveComponent(previous);
}
void Menu::down() {
  PROFILE_FUNCTION();
  if (children[index]) {
    children[index]->previous = this;
    menuManagerPtr->setActiveComponent(children[index]);
  }
}
void Menu::left() {
  PROFILE_FUNCTION();
  if (index != 0) {
    index--;
    return;
  }
  index = children.size() - 1;
}
void Menu::right() {
  PROFILE_FUNCTION();
  if (index != children.size() - 1) {
    index++;
    return;
  }
  index = 0;
}
Menu::Menu(const char* name, std::vector<IMenuComponent*>&& vector)
 : name(name), children(std::move(vector)) {
  PROFILE_FUNCTION();
  for (const auto& element : children)
    element->previous = this;
}

/// LED Settings Item
void LEDSettingsItem::display() {
  PROFILE_FUNCTION();
  lcd.clear();
  lcd.print(name);
  lcd.setCursor(0, 1);
  lcd.print(param);
}
void LEDSettingsItem::subDisplay() {
  lcd.print(name);
}

void LEDSettingsItem::up() {
  PROFILE_FUNCTION();
  if (previous)
    menuManagerPtr->setActiveComponent(previous);
}
void LEDSettingsItem::down() {
  PROFILE_FUNCTION();
}

void LEDSettingsItem::left() {
  PROFILE_FUNCTION();
  param--;
  // Hacky... Eek
  CMD_ForceSetControllerLeds().execute();
}
void LEDSettingsItem::right() {
  PROFILE_FUNCTION();
  param++;
    // Hacky... Eek
  CMD_ForceSetControllerLeds().execute();
}

LEDSettingsItem::LEDSettingsItem(const char* name, byte& param)
 : name(name), param(param) {
  PROFILE_FUNCTION();
}