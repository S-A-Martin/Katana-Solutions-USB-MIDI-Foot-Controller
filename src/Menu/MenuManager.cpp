#include "MenuManager.h"
#include "Tools/Profiling.h"

void MenuManager::display() {
  PROFILE_FUNCTION();
  activeComponent->display();
}

void MenuManager::setActiveComponent(IMenuComponent* newComponent) {
  PROFILE_FUNCTION();
  activeComponent = newComponent;
}
void MenuManager::up() {
  PROFILE_FUNCTION();
  activeComponent->up();
  display();
}
void MenuManager::down() {
  PROFILE_FUNCTION();
  activeComponent->down();
  display();
}
void MenuManager::left() {
  PROFILE_FUNCTION();
  activeComponent->left();
  display();
}
void MenuManager::right() {
  PROFILE_FUNCTION();
  activeComponent->right();
  display();
}
MenuManager::MenuManager() {
  PROFILE_FUNCTION();
  activeComponent = &this->mainMenu;
  IMenuComponent::setMenuManager(this);
}