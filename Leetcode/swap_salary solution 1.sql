# https://leetcode.com/problems/swap-salary
# Write your MySQL query statement below
update  salary 
set 
sex =  IF (sex= "m", "f", "m"); 