### **README.md**

# C++ Module 03: Inheritance

This repository contains solutions for **Exercises 00 to 02** of the **C++ Module 03: Inheritance**. These exercises introduce fundamental concepts of object-oriented programming, focusing on constructors, destructors, inheritance, and polymorphism.

---

## Table of Contents

1. [Exercises Overview](#exercises-overview)
2. [Requirements](#requirements)
3. [Build Instructions](#build-instructions)
4. [Exercise Details](#exercise-details)
   - [Exercise 00: ClapTrap](#exercise-00-claptrap)
   - [Exercise 01: ScavTrap](#exercise-01-scavtrap)
   - [Exercise 02: FragTrap](#exercise-02-fragtrap)
5. [Testing](#testing)

---

## Exercises Overview

### **Exercise 00: ClapTrap**
- Implement a `ClapTrap` class with basic functionality such as attacking, taking damage, and repairing itself.

### **Exercise 01: ScavTrap**
- Extend the `ClapTrap` class by creating a `ScavTrap` derived class with additional functionality.

### **Exercise 02: FragTrap**
- Further extend the `ClapTrap` class by creating a `FragTrap` derived class with unique features.

---

## Requirements

- **C++ Compiler**: Any compiler supporting **C++98** standard.
- **Build Tools**: `make` is recommended for building the project.
- Compile with the following flags:
  ```bash
  -Wall -Wextra -Werror -std=c++98
  ```

---

## Build Instructions

1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/Module03.git
   cd Module03
   ```

2. Navigate to the specific exercise directory (e.g., `ex00`, `ex01`, or `ex02`):
   ```bash
   cd ex00
   ```

3. Build the project using `make`:
   ```bash
   make
   ```

4. Run the executable:
   ```bash
   ./ClapTrap
   ```

---

## Exercise Details

### **Exercise 00: ClapTrap**

- **Directory**: `ex00/`
- **Objective**:
  Implement a `ClapTrap` class with the following attributes:
  - `name`: Passed as a parameter to the constructor.
  - `hitPoints` (10): Represents the health of the ClapTrap.
  - `energyPoints` (10): Represents the energy for actions.
  - `attackDamage` (0): Represents the damage dealt in attacks.

- **Key Member Functions**:
  1. `void attack(const std::string& target)`: Prints an attack message and decreases energy points.
  2. `void takeDamage(unsigned int amount)`: Reduces hit points based on damage taken.
  3. `void beRepaired(unsigned int amount)`: Restores hit points by consuming energy points.

- **Additional Notes**:
  - Constructors and destructors must print messages for debugging.
  - Implement tests to validate behavior.

---

### **Exercise 01: ScavTrap**

- **Directory**: `ex01/`
- **Objective**:
  Create a `ScavTrap` class that inherits from `ClapTrap` and adds new functionality:
  - `guardGate`: A unique method for ScavTrap.
  
- **Attributes**:
  - `hitPoints`: 100
  - `energyPoints`: 50
  - `attackDamage`: 20

- **Key Member Functions**:
  1. `void attack(const std::string& target)`: Overrides `ClapTrap`'s attack with a different message.
  2. `void guardGate()`: Displays a message that the ScavTrap is in gatekeeper mode.

- **Additional Notes**:
  - Ensure proper constructor/destructor chaining.
  - Update tests to verify inheritance and new functionality.

---

### **Exercise 02: FragTrap**

- **Directory**: `ex02/`
- **Objective**:
  Create a `FragTrap` class that inherits from `ClapTrap` with unique attributes and functionality:
  - `highFivesGuys`: A special method to display a high-five message.

- **Attributes**:
  - `hitPoints`: 100
  - `energyPoints`: 100
  - `attackDamage`: 30

- **Key Member Functions**:
  1. `void highFivesGuys()`: Displays a positive high-five message.

- **Additional Notes**:
  - Ensure constructor/destructor chaining is correct.
  - Extend tests to validate FragTrap-specific behavior.

---

## Testing

### **Sample Output for ex00**
```plaintext
ClapTrap Default Constructor called
ClapTrap Parameterized Constructor called for Alpha
ClapTrap Parameterized Constructor called for Beta
ClapTrap Alpha attacks Beta, causing 0 points of damage!
ClapTrap Beta takes 0 points of damage! Remaining hit points: 10
ClapTrap Beta repairs itself, gaining 3 hit points!
ClapTrap Alpha attacks Beta, causing 0 points of damage!
ClapTrap Beta takes 5 points of damage! Remaining hit points: 5
ClapTrap Destructor called
ClapTrap Destructor called
ClapTrap Destructor called
```
