# Technothon-Kaizen-2019
# Project Title: Agricultural League- Land Integration System

## Motivation:
From the research conducted in India we can infer that due to increasing population and breakdown of the joint families continuous sub-division of agricultural land into smaller plots has occured. Smaller size of holdings cultivation becomes uneconomic. This ever-increasing land distribution problems faced by local farmers and people associated with agriculture have motivated us for the creation and maintenance of the project.

## Overview:
+ Presently, major problems faced by Indian agriculture are cropping pattern, average size of land holdings, production techniques and instability in production due to changing weather and transport management system.
+ Our project is aimed at solving issues that concern with the small size of land holdings and improper production techniques. 
+ The above mentioned problem can be inculcated by bringing all small scale farmers, having lands adjacent to each other. Further, all of them will be suggested to come together and join in their land to form a large piece of land in order to cultivate the field on a whole.
+ Addition, to that a study of the soil quality, moisture content and temperature using moisture sensor, temperature sensor will be done along with machine learning algorithm for predicting the right crop and correct amount of water required in different parts of the field.

![Image description](https://github.com/Ragini132/Technothon-Kaizen-2019/blob/master/India_land_distribution.png)

## Problem statement:
+ Sub-Division and fragmentation of land holdings: Due to the growth of population and breakdown of the joint family system, has occurred continuous sub-division of agricultural land into smaller plots. With smaller size of holdings cultivation becomes uneconomic.
+ Such sub-division and fragmentation make the efficient use of land virtually impossible and add to the difficulties of increasing capital equipment on the farm. All these factors account for the low productivity of Indian agriculture.
+ Further, due to unavailability of proper knowledge, regarding how to effectively use the available resources (neglection of crop rotation, inadequate use of manures and fertilisers, use of poor quality seeds, inadequate use of efficient farm equipment) further reduces the productivity.

![Image description](https://github.com/Ragini132/Technothon-Kaizen-2019/blob/master/Farmer_land_share.png)

## Target Audience:
+ This system would directly work towards the betterment of Indian farmers and workers in the agricultural field and would indirectly help in growth and development of India as agriculture sector is one of the major contributors in GDP.

## Project Objective:
+ We are planning to build a web application that will locate all farmers with small land holdings. They’ll asked to work collectively in their adjacent land holdings.
+ Further, keeping the quality of soil of all land holdings in mind, best crops suitable for the field will be suggested. Finally at the time of revenue distribution, the profit will be distributed among the farmers in the ratio of the their land holdings.
+ After harvesting the crop, the farmers will get information regarding nearby available markets for selling their produce, depending upon those selections the transport management system will come into play wherein they’ll be able to avail transport facilities between their  farmlands and desired market of their choice.
+ Combining data from the moisture sensor and temperature sensor with machine learning algorithm to determine the the amount of water required in different parts of the field.

## Technical framework:
+ Temperature sensor
+ Moisture sensor
+ Arduino
+ Visual studio (HTML, Javascript, CSS)
+ Jupyter notebook (Python)
+ Firebase
+ Thinkspeak software

## Screenshots:
![Image description](https://github.com/Ragini132/Technothon-Kaizen-2019/blob/master/hardware_image.jpeg)

![Image description](https://github.com/Ragini132/Technothon-Kaizen-2019/blob/master/home_page.png)

![Image description](https://github.com/Ragini132/Technothon-Kaizen-2019/blob/master/Sensor_values.JPG)


## Project working:

+ The web application different tabs that has general information about Indian agriculture (refer above screenshots ). The tab name "Land Integration System" takes in the input of the farmer who has land less then 5 hectare and is willing to collaborate with other neighbouring small farmers. As per the location of the farmer the neighbouring small scale farmers will be displayed. Further, all the farmer will be collaborated to work collectively.

+ Further, best crop prediction for the integrated land is done keeping in mind the land quality of all small lands which are integrated, to ensure effective productivity (4 parameters: soil type, moisture, weather and previous crop grown on the land).

+ Along with that the hardware part of the project will be determine the amount of irrigtaion needed in the fields with the help of moisture and temperature sensor.

## Demo Video:

[Video_Link](https://youtu.be/0jcW_wZYwxA)

## How to use:
+ Firstly clone and download the repository as a zip folder.

#### Software:

+ Now, open the first.html file present in the zip folder. This opens the website, further traverse through all the tabs to explore the website.Additionally, install jupyter notebook and run the above the given crop_prediction code on the given dataset to get the optimal crop for the integrated land.

#### Hardware:

Components:
+ DHT 11(Temperature Sensor)
+ Soil Moisture Sensor( By meausuring resistance) 
+ Servo Motor
+ 1 10k ohm resistor
+ Jumper Wires

This is a prototype of automated irrigation system.  

Firstly we open crop_monitoring.ino file on installed arduino software upload the code on arduino along with the required apparatus and observe the changes. We have a used a bottle as a pipe that would be used for irrigation to demonstrate automatic switching of water supply depending upon the values of temperature and moisture sensor. When the soil moisture is less and the temperature is high we switch on the water supply such that hole in the bottle is at the bottom and water starts dripping. When the moisture is high, then the supply stops.(hole comes to the top)

## Future Work:

+ This model is developed on a small scale i.e for one village further this model could be extended to nation-wide level incorporating all villages in every state across the whole country.

## Credits:

+ Acknowledging Technothon-Kaizen-2019, NSS IIT Delhi for providing this great opportunity and platform. This helped us in presenting our idea and solution to one of the major problems faced by the Indian Agriculture.

