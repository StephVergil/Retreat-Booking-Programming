# Advanced Zeek Scripting for Network Traffic Analysis

This project delves into the advanced functionalities of Zeek scripting to process and analyze network traffic with precision. Through hands-on exercises, this lab demonstrates how to utilize Zeek scripts for monitoring UDP and TCP traffic, customizing log streams, and organizing logs for specific protocols or events, enabling efficient and detailed network traffic analysis.

---

## Objectives
- Master the use of Zeek scripting for targeted traffic monitoring and analysis.
- Execute and customize Zeek scripts for protocol-specific traffic handling.
- Develop and refine log streams to isolate critical network events.
- Organize and manage logs to streamline network analysis workflows.

---

## Tools Used
- **Zeek**: For real-time traffic monitoring, analysis, and detailed log generation.
- **Sample PCAP Files**: High-quality test data to simulate network scenarios.
- **Linux Shell Scripts**: Automation tools for cleanup and script optimization.

---

## Key Steps

### **1. Starting Zeek for Analysis**
- Initialize Zeek to begin traffic analysis:
  ```bash
  cd $ZEEK_INSTALL/bin && sudo ./zeekctl start
  ```

### **2. Executing Zeek Scripts**
- **UDP Traffic Analysis**:
  - Navigate to the **Lab-Scripts** directory: `cd ~/Zeek-Labs/Lab-Scripts/`
  - Process a packet capture file with a UDP-focused Zeek script:
    ```bash
    zeek –C –r ../Sample-PCAP/smallFlows.pcap ../Lab-Scripts/lab6_sec2-2.zeek
    ```
- **TCP Traffic Analysis**:
  - Inspect the TCP Zeek script content:
    ```bash
    nl ../Lab-Scripts/lab6_sec2-3.zeek
    ```
  - Execute the script to analyze TCP traffic:
    ```bash
    zeek –C -r ../Sample-PCAP/smallFlows.pcap ../Lab-Scripts/lab6_sec2-3.zeek
    ```

### **3. Modifying Zeek Log Streams**
- **Renaming Logs**:
  - Review the script for log renaming:
    ```bash
    nl ../Lab-Scripts/lab6_sec3-1.zeek
    ```
  - Execute the script to generate updated log files:
    ```bash
    zeek –C -r ../Sample-PCAP/smallFlows.pcap ../Lab-Scripts/lab6_sec3-1.zeek
    ```
- **Creating Protocol-Specific Logs**:
  - Examine the script for protocol-specific log generation:
    ```bash
    nl ../Lab-Scripts/lab6_sec3-2.zeek
    ```
  - Generate logs focusing on HTTP traffic:
    ```bash
    zeek –C -r ../Sample-PCAP/smallFlows.pcap ../Lab-Scripts/lab6_sec3-2.zeek
    ```

### **4. Cleanup and Shutdown**
- Use a cleanup script to remove temporary files and logs:
  ```bash
  ./../Lab-Scripts/lab_clean.sh
  ```
- Stop Zeek after completing the lab:
  ```bash
  cd $ZEEK_INSTALL/bin && sudo ./zeekctl stop
  ```

---

## Results
The lab demonstrated Zeek’s advanced capabilities in capturing and organizing network traffic logs. Key outcomes included:
- Identification of distinct UDP and TCP traffic patterns through tailored scripts.
- Generation of organized and protocol-specific logs, such as HTTP traffic logs, for focused analysis.
- Utilization of Zeek scripting to streamline log management and enhance analytical clarity.

---

## Project Resources
- **Project Link**: [Introduction to Zeek Scripting](https://github.com/StephVergil/Introduction-to-Zeek-Scripting/blob/main/VNetLab3%20Lab06.docx.pdf)
- [Zeek Documentation](https://docs.zeek.org/)
- [PCAP Samples](https://wiki.wireshark.org/SampleCaptures)
- [Zeek Scripting Reference Guide](https://docs.zeek.org/en/current/scripting/index.html)

---

## Conclusion
This lab underscores the power of Zeek scripting in customizing and enhancing network traffic analysis workflows. By utilizing custom scripts, analysts can isolate, segment, and organize network logs for specific protocols or events, improving clarity and efficiency. This ability is essential for real-time network monitoring and forensic investigations.

---

## Disclaimer
This project was conducted in a controlled environment for educational purposes. Unauthorized use of these tools or techniques outside such environments may violate ethical guidelines and legal regulations.
