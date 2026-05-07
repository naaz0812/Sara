CREATE DATABASE ybn;
USE ybn;

CREATE TABLE note( name VARCHAR(50), ROLLNO INT, ENO INT, SEM VARCHAR(25));


INSERT INTO note (name, ROLLNO, ENO, SEM)
VALUES('khsui', 42, 2, 'second');

SELECT* FROM note;

CREATE TABLE gister (name VARCHAR(99), id INT, address VARCHAR(200), date DATE sem VARCHAR(20));


INSERT INTO gister(name, id, address, date, sem)
VALUES ('Aisha', 101, 'Dhanbaad','2026-02-02','3rd sem'),
('Sania', 102, 'jamshedpur', '2022-06-05','1st sem'),
('Suhana', 103, 'Mumbai', '2023-01-18', '2nd sem'),
('Sara', 104, 'Latehaar', '2021-09-09', '4th sem'),
('Rahul',105, 'Chennei', '2024-06-18', '3rd sem'),
('Sahil',106, 'Assam', '2024-06-20', '4th sem'),
('Saba',107, 'Mumbai', '2026-03-25', '5th sem');

SELECT*FROM gister; 


UPDATE gister
SET sem='1st sem'
WHERE name='Aisha';

SELECT*FROM gister; 

DELETE FROM gister 
WHERE name='Aisha';







