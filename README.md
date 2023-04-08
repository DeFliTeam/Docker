# Docker
Docker Instructions to Run DeFli Software as Docker Container 

# Overview 
This document aims to guide you through installing DeFli Software as a Docker Container. This enables you to run DeFli concurrently with other DeWi network protocols such as TTN or Helium 

# Concepts 
Receiving ADSB data with readsb-protobuf 
Feeding data to DeFli server 

The core set of containers consists of: readsb-protobuf, the DeFli feeder container and tar1090. These are deployed in conjunction with the DeFli ADS-B Recevier (RTL-SDR)

<a href="https://ibb.co/JdVZBvg"><img src="https://i.ibb.co/CtgL1bD/Helium-Hotspot.png" alt="Helium-Hotspot" border="0"></a><br /><a target='_blank' href='https://imgbb.com/'>post a picture</a><br /> 

To explain the flowchart above: 

ADS-B transmissions are received via the 1090MHz antenna and DeFli Receiver Unit 
The DeFli Receiver Unit is mapped through to a readsb container container, this container's function is to decode the ADS-B transmissions and makes them available via beast. 
The DeFli feeder container, this container reads Beast protocol data from readsb and submits flight data to the DeFli service. 
Flight data is visualised using tar1090 

The container will run on 

linux/amd64 (Intel/AMD PC's/Servers) 
linux/arm/v7 (Raspberry Pi) 
linux/arm/64 (Raspberry Pi running 64 bit OS) 

NOTE UPON INSTALLING THE DeFli Docker You Will Need to Know: 
Altitude 
Long/Lat to 5 decimal places 
These can be obtained from https://www.freemaptools.com/elevation-finder.htm  

# Instructions 

Please follow the instructions in this file order: 

Installation Instructions/ Install on RockPi 
Install.sh 
Deployreadsb 
Connect to DeFli Software Feeder






