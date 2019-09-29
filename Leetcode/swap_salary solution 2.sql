# https://leetcode.com/problems/swap-salary
# Write your MySQL query statement below
update  salary 
set sex = case  
 when sex = 'm' then 'f'  
  when sex='f' then 'm'
 end
 WHERE sex= 'f' or sex ='m'
  