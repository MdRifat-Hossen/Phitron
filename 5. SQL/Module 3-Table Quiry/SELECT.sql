create database Rifat;
use rifat;

Create Table Student
(
Roll CHAR(4) primary key,
Name VARCHAR(50) NOT NULL,
Email VARCHAR(255) unique,
Adress VARCHAR(655),
Age INT CHECK(Age>10)
);
INSERT INTO Student(Roll,Name,Email,Adress,Age) Values(1,'Hasan','rifat.pust.ice14@gmail.com','Fulbaria',11);
INSERT INTO Student(Roll,Name,Email,Adress,Age) Values(2,'Hasan','rifat.pust.ie14@gmail.com','Fulbaria',11);
Create Table Library
(
BookName VARCHAR(50) primary key,
WhoHired_Roll VARCHAR(4),
foreign key (WhoHired_Roll) references student(Roll)
);

-- Showing only hasan All data
select*
From Student
Where Roll=1; 


-- Only Roll1 see the Email adress
Select Email
From Student
Where Roll=1; 