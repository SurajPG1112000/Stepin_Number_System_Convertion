# TEST PLAN

## Table: High level test plan

| **Test ID** | **Description**                   | **Exp I/P** | **Exp O/P** | **Actual O/P** |    
|-------------|-----------------------------------|------------|-------------|----------------|
|  H_01       | Selection of choice | Choice | SUCCESS | SUCCESS |




## Table: Low level test plan

| **Test ID** | **HL_ID** | **Choice** |**Description**   | **Exp Input** | **Exp Output** | **Actual Output** |**Type Of Test**  |    
|-------------|-----------|-----------|---------------------------|------------|-------------|----------------|------------------|
|  L_01       | H_01 | 1  | Hexadecimal To Decimal| b6a4 | 46756 | 46756 | Requirement based |
|  L_02       | H_01 | 1  | Hexadecimal To Decimal| k | Not a hexa number | 0 | Scenario based |
|  L_03       | H_01 | 2  | Binary To Decimal| 11011 | 27 | 27 | Requirement based |
|  L_04       | H_01 | 2  | Binary To Decimal| 1137 | Not a binary number | 25 |  Scenario based |
|  L_05       | H_01 | 3  | Octal To Decimal| 7125 | 3669 | 3669 | Requirement based |
|  L_06       | H_01 | 3  | Octal To Decimal| 7129 | Not a octal number | 29385 |  Scenario based |
|  L_07       | H_01 | 4  | Decimal To Binary| 7621 | 1110111000101  | 1110111000101   | Requirement based |
|  L_08       | H_01 | 4  | Decimal To Binary| 12227798643 | 1011011000110101010110011001110011 | -5462371980997460485  | Boundary based |
|  L_09       | H_01 | 5  | Decimal To Octal| 41654 | 121266 | 1266 | Requirement based |
|  L_10       | H_01 | 5  | Decimal To Octal| 8151005005 | 74565473515 | 74565473515 | Boundary based |
|  L_11       | H_01 | 6  | Decimal To Hexadecimal | 894867 | DA793 | DA793 | Requirement based |
|  L_12       | H_01 | 6  | Decimal To Hexadecimal | 812390807465 | BD2643F7A9 | ↕¶U↓)↔&5▼☻ |  Boundary based |
|  L_13       | H_01 | 7  | Binary To Hexadecimal | 11011101 | 1BD | 1BD | Requirement based |
|  L_14       | H_01 | 7  | Binary To Hexadecimal | 111001100011 | E63 | 1003 | Boundary based |
|  L_15       | H_01 | 8  | Binary To Octal | 11001 | 31 | 31 | Requirement based |
|  L_16       | H_01 | 8  | Binary To Octal | 101011001100 | 5314 | 5314 | Boundary based |
|  L_17       | H_01 | 9  | Octal To Binary | 7463 | 111100110011 | 111100110011 | Requirement based |
|  L_18       | H_01 | 9  | Octal To Binary | 706235410 | 111000110010011101100001000 | 386444552293599232  |Boundary based |
|  L_19      | H_01 | 10 | Hexadecimal To Binary | CDAA123 | 1100110110101010000100100011 | 1100110110101010000100100011 | Requirement based |
|  L_20   | H_01 | 10 | Hexadecimal To Binary | 11A9900FC64B | 100011010100110010000000011111100011001001011 | 000100011010100110010000000011111100011001001011 |Boundary based |















