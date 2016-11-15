# BoolAlgLogic_Simplifying_Circuits_Lab
Used K-Maps to simplify a Boolean equation to determine whether campus should be closed or not.

Some Background Information
For this lab, we are pretending that it is a possibility of getting a snow day. In snowy areas,
a snow day means that there is too much snow on the roads, and it is unsafe to travel to
school. When it snows, the streets are salted with a special kind of salt that melts the
ice and prevents more ice from forming on the roads (since salt raises the melting point of
water/ice). It is very unsafe to drive on ice, as the car can easily slip out of control.


Instructions
Assume you are responsible for designing a program that will allow the president of your
college to determine whether to close campus due to weather conditions. If the highway
department has not salted the area roads, and there is ice on the roads, campus should be
closed. Regardless of whether there is ice or salt on the roads, if there is more than 8 in. of
snow, campus should be closed. In all other situations, campus should remain open. There
are three inputs: ice (or no ice), salt (or not salt), and snow of more than 8 in. on the roads
(or not), and one output: closed (or not closed).
1. Write a sum of minterms Boolean equation that represents when the school should be
closed. Be sure to define any variables that you use.
2. Use a K-Map to simplify your Boolean equation.
3. Write a program that asks the user if there is ice, if the highway department has salted
the roads, and how many inches of snow has fallen. Then output whether campus should be closed or not.


Tests
a. No ice on the roads, highway department has not salted the roads, and there is 1 inch
of snow
b. No ice on the roads, highway department has not salted the roads, and there is 15
inches of snow
c. Ice on the roads, highway department has salted the roads, and there is 7 inches of
snow
d. Ice on the roads, highway department has not salted the roads, and there is 12 inches
of snow
