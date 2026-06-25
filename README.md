# Blood-management
A console-based Blood Management System developed in C for managing blood donors, receivers, blood stock, reports, and authentication using file handling.
# Blood Management System

A console-based Blood Management System developed in C to efficiently manage blood donors, receivers, and blood stock records. The system provides an organized digital solution for maintaining blood-related information, reducing manual paperwork, and improving record accessibility.

---

## 1. Build and Run

### Build

Using GCC:

```bash
gcc main.c auth.c donor.c receiver.c stock.c report.c -o BloodManagementSystem
```

### Run

Linux/macOS:

```bash
./BloodManagementSystem
```

Windows:

```bash
BloodManagementSystem.exe
```

### Login Credentials

```text
Username: admin
Password: admin123
```

---

## 2. Project Structure

```text
BloodManagementSystem/
│
├── main.c
├── auth.c
├── auth.h
│
├── donor.c
├── donor.h
│
├── receiver.c
├── receiver.h
│
├── stock.c
├── stock.h
│
├── report.c
├── report.h
│
├── users.dat
├── donors.dat
├── receivers.dat
├── stock.dat
└── report.txt
```

---

## 3. Project Overview

The Blood Management System is designed to maintain records of:

* Blood Donors
* Blood Receivers
* Blood Stock
* User Authentication
* Blood Group Information

The system stores data using binary files and provides a menu-driven interface for easy management of blood bank records.

---

## 4. Features

### Authentication System

* Secure Login
* Default Administrator Account
* User Verification

### Donor Management

* Add Donor
* View Donors
* Search Donor by Blood Group
* Update Donor Information
* Delete Donor Records

### Receiver Management

* Add Receiver
* View Receivers
* Search Receiver by Blood Group
* Update Receiver Information
* Delete Receiver Records

### Blood Stock Management

* View Blood Stock
* Add Blood Units
* Reduce Blood Units
* Permanent Stock Storage

### Report Management

* Generate Reports
* Store Reports in Text Format

---

## 5. Data Storage

The system uses binary files for permanent storage.

### users.dat

Stores administrator login credentials.

### donors.dat

Stores donor records:

```c
typedef struct
{
    int id;
    char name[50];
    int age;
    char gender[10];
    char bloodGroup[5];
    char phone[20];
    char address[100];
} Donor;
```

### receivers.dat

Stores receiver records:

```c
typedef struct
{
    int id;
    char name[50];
    char bloodGroup[5];
    int unitsRequired;
    char phone[20];
} Receiver;
```

### stock.dat

Stores available blood stock:

```c
typedef struct
{
    char bloodGroup[5];
    int units;
} BloodStock;
```

---

## 6. Module Responsibilities

### main.c

Responsible for:

* Program Startup
* Login Process
* Main Dashboard
* Navigation Between Modules

### auth.c

Responsible for:

* User Authentication
* Default Admin Creation
* Login Validation

### donor.c

Responsible for:

* Add Donor
* Search Donor
* View Donors
* Update Donor
* Delete Donor

### receiver.c

Responsible for:

* Add Receiver
* Search Receiver
* View Receivers
* Update Receiver
* Delete Receiver

### stock.c

Responsible for:

* Blood Stock Initialization
* Add Stock
* Reduce Stock
* View Stock
* Save Stock

### report.c

Responsible for:

* Report Generation
* Exporting System Information

---

## 7. System Workflow

1. User logs into the system.
2. Dashboard menu is displayed.
3. User selects an operation.
4. Data is validated and processed.
5. Records are stored in binary files.
6. Information can be searched, updated, viewed, or deleted.
7. Reports can be generated when required.

---

## 8. Main Menu

```text
====================================
      BLOOD MANAGEMENT SYSTEM
====================================

1. Donor Management
2. Receiver Management
3. Blood Stock
4. Reports
5. Logout
6. Exit
```

---

## 9. Donor Management Menu

```text
1. Add Donor
2. View Donors
3. Search Donor
4. Update Donor
5. Delete Donor
6. Back
```

---

## 10. Receiver Management Menu

```text
1. Add Receiver
2. View Receivers
3. Search Receiver
4. Update Receiver
5. Delete Receiver
6. Back
```

---

## 11. Blood Stock Menu

```text
1. View Stock
2. Add Stock
3. Reduce Stock
4. Back
```

---

## 12. Important C Functions Used

### fopen()

Opens a file for reading, writing, or appending.

```c
fopen("donors.dat","rb");
```

### fwrite()

Writes structures into binary files.

```c
fwrite(&donor,sizeof(Donor),1,fp);
```

### fread()

Reads structures from binary files.

```c
fread(&donor,sizeof(Donor),1,fp);
```

### strcmp()

Compares strings.

```c
strcmp(d.bloodGroup,bg);
```

### remove()

Deletes a file.

```c
remove("donors.dat");
```

### rename()

Renames a file.

```c
rename("temp.dat","donors.dat");
```

---

## 13. Objectives

* Maintain donor records efficiently.
* Maintain receiver records efficiently.
* Manage blood stock digitally.
* Reduce paperwork.
* Improve record accessibility.
* Provide a simple and user-friendly interface.
* Support quick searching and updating of records.

---

## 14. Future Enhancements

* Multi-user Authentication
* Backup and Restore System
* Dashboard Statistics
* Low Stock Alerts
* Date and Time Logging
* Hospital Integration
* Database Support (MySQL)
* GUI Version Using GTK
* Online Blood Donor Search

---

## 15. Conclusion

The Blood Management System provides a simple, reliable, and efficient solution for maintaining blood donor, receiver, and blood stock records. By digitizing blood management operations, the system reduces manual work, improves data organization, and enables quick access to important blood-related information. This project demonstrates the practical implementation of file handling, structures, modular programming, and data management concepts in the C programming language.

---

## Author

**Hiran Rajbanshi**

Bachelor of Computer Applications (BCA)

Blood Management System Project
