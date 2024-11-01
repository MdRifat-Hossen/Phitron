use rifat;
CREATE TABLE Student(
Roll CHAR(6) PRIMARY KEY,
Name VARCHAR(55) NOT NULL,
Subject VARCHAR(20) NOT NULL
);

CREATE TABLE Library(
BookName VARCHAR(23) PRIMARY KEY,
Roll CHAR(36),
FOREIGN KEY (Roll) REFERENCES Student (Roll)

);
drop table student;
drop table fees;
drop table library;
CREATE TABLE Fees(
Roll CHAR(4),
Month VARCHAR(32) NOT NULL,
Amount INT NOT NULL,
fOREIGN KEY (Roll) REFERENCES Student(ROll)

);

CREATE TABLE Empolyee(
ID char(4),
FirstName VARCHAR(32),
LastName VARCHAR(32),
Age INT,
Department VARCHAR(36)
);

INSERT INTO Empolyee(ID,FirstName, LastName,Age,Department)
Value(1,'Jhon','Done',28,'seles');

INSERT INTO Empolyee(ID,FirstName, LastName,Age,Department)
Value(2,'jane','smith',32,'Market');
INSERT INTO Empolyee(ID,FirstName, LastName,Age,Department)
Value(3,'Micheal','jhonson',32,'Finance');

INSERT INTO Empolyee(ID,FirstName, LastName,Age,Department)
Value(4,'sarah','Brown',30,'HR');

INSERT INTO Empolyee(ID,FirstName, LastName,Age,Department)
Value(5,'william','Davis',25,'Engineer');
INSERT INTO Empolyee(ID,FirstName, LastName,Age,Department)
Value(6,'Emilly','Lee',33,'Market');

select distinct Department From Empolyee;
select Lastname 
From empolyee 
order by Age desc;

select Lastname
from empolyee
where Age>30 and Department='Market';

select *
from empolyee;

select *
from empolyee
where Department= 'Engineer';