CREATE DATABASE University;

USE University;

CREATE TABLE Student(StudentID INT, Name VARCHAR(200), Age INT, Course VARCHAR(10), Marks INT);

INSERT INTO  Student(StudentID, Name, Age, Course, Marks)
VALUES (101, 'Rahul', 20, 'BCA', 85),
(102, 'Priya', 21, 'BBA', 78),
(103, 'Amit', 22, 'BCA', 90),
(104, 'Neha', 20, 'BCom', 72),
(105, 'Arjun', 21, 'BCA', 88);

-- INSERT INTO  Student(StudentID, Name, Age, Course, Marks)
-- VALUES (101, 'Rahul', 20, 'BCA', 85);

SELECT* FROM Student;

SELECT* FROM Student
WHERE course='BCA';


SELECT* FROM Student
WHERE Marks>80;

SELECT* FROM Student
WHERE Age=21;

