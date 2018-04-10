# Library_return_book_fine
HackerRank challange

<b>Task</b> 
Your local library needs your help! Given the expected and actual return dates for a library book, create a program that calculates the fine (if any). The fee structure is as follows:
<ul>
<li>If the book is returned on or before the expected return date, no fine will be charged (i.e.: <b>fine = 0</b>.) </br> </li>
<li>If the book is returned after the expected return day but still within the same calendar month and year as the expected return date, <b> fine = 15 * (the numbers of day late)</b>.</br></li>
<li>If the book is returned after the expected return month but still within the same calendar year as the expected return date, the  <b>
fine = 500 * (the number of months late)</b>.</br></li>
<li>If the book is returned after the calendar year in which it was expected, there is a fixed fine of <b> 10000 </b>.</br></li>
</ul>

<b>Input Format</b>

The first line contains  space-separated integers denoting the respective , , and  on which the book was actually returned. 
The second line contains  space-separated integers denoting the respective , , and  on which the book was expected to be returned (due date).
