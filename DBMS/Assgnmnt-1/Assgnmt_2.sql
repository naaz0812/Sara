CREATE DATABASE Company;

USE Company;


CREATE TABLE Employees (EmpID INT, EmpName VARCHAR(88), Department VARCHAR(15), Salary INT, Age INT);


INSERT INTO  Employees(EmpID, EmpName,Department, Salary, Age)
VALUES (201,'Rahul', 'HR', 30000, 25),
(202,'Priya', 'IT', 50000, 28),
(203,'Amit', 'Finance', 45000, 30),
(204,'Neha', 'IT', 55000, 27),
(205,'Arjun', 'HR', 32000, 26);

SELECT* FROM Employees;

SELECT *
FROM Employees
ORDER BY Salary ASC;


SELECT*
FROM Employees
ORDER BY Salary DESC;



SELECT*
FROM Employees
ORDER BY Department ASC;

SELECT*
FROM Employees
ORDER BY Age DESC; 
