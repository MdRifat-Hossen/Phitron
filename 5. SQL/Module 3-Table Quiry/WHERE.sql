create database Rifat;
use rifat;

Create Table marks(
Roll VARCHAR(4) Primary Key,
CSE INT,
ICE INT
);
insert into marks (Roll,CSE,ICE) Values (101,100,60);
insert into marks (Roll,CSE,ICE) Values (102,60,60);
insert into marks (Roll,CSE,ICE) Values (103,15,60);
 -- Jar Roll=103 tar total Marks koto
 
 Select CSE+ICE
 From marks
 Where Roll='103';