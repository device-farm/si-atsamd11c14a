namespace target {
  namespace pm {
    namespace reg {
      
      /**
        Control
      */
      class CTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Clock Failure Detector Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCFDEN() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Clock Failure Detector Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCFDEN(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets Backup Clock Select
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBKUPCLK() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets Backup Clock Select
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBKUPCLK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
      };
      
      /**
        Sleep Mode
      */
      class SLEEP {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Idle Mode Configuration
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getIDLE() volatile {
          return (raw & (0x3 << 0)) >> 0;
        }
        /**
          Sets Idle Mode Configuration
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setIDLE(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 0)) | ((value << 0) & (0x3 << 0));
        }
      };
      
      /**
        External Reset Controller
      */
      class EXTCTRL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets External Reset Disable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSETDIS() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets External Reset Disable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSETDIS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
      };
      
      /**
        CPU Clock Select
      */
      class CPUSEL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets CPU Prescaler Selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getCPUDIV() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets CPU Prescaler Selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setCPUDIV(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
      };
      
      /**
        APBA Clock Select
      */
      class APBASEL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets APBA Prescaler Selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getAPBADIV() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets APBA Prescaler Selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setAPBADIV(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
      };
      
      /**
        APBB Clock Select
      */
      class APBBSEL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets APBB Prescaler Selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getAPBBDIV() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets APBB Prescaler Selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setAPBBDIV(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
      };
      
      /**
        APBC Clock Select
      */
      class APBCSEL {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets APBC Prescaler Selection
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getAPBCDIV() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets APBC Prescaler Selection
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setAPBCDIV(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
      };
      
      /**
        AHB Mask
      */
      class AHBMASK {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets HPB0 AHB Clock Mask
          @param index in range 0..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHPB(int index) volatile {
          return (raw & (0x1 << (0 + 1 * (index - 0)))) >> (0 + 1 * (index - 0));
        }
        /**
          Sets HPB0 AHB Clock Mask
          @param index in range 0..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHPB(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (0 + 1 * (index - 0)))) | ((value << (0 + 1 * (index - 0))) & (0x1 << (0 + 1 * (index - 0))));
        }
        /**
          Gets HPB0 AHB Clock Mask
          @return value in range 0..7
        */
        __attribute__((always_inline)) unsigned long getHPB() volatile {
          return (raw & (0x7 << 0)) >> 0;
        }
        /**
          Sets HPB0 AHB Clock Mask
          @param value in range 0..7
        */
        __attribute__((always_inline)) unsigned long setHPB(unsigned long value) volatile {
          raw = (raw & ~(0x7 << 0)) | ((value << 0) & (0x7 << 0));
        }
        /**
          Gets DSU AHB Clock Mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDSU() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets DSU AHB Clock Mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDSU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets NVMCTRL AHB Clock Mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNVMCTRL() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets NVMCTRL AHB Clock Mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNVMCTRL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets DMAC AHB Clock Mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets DMAC AHB Clock Mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets USB AHB Clock Mask
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSB() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets USB AHB Clock Mask
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
      };
      
      /**
        APBA Mask
      */
      class APBAMASK {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PAC0 APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPAC0() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets PAC0 APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPAC0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets PM APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPM() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets PM APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPM(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets SYSCTRL APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYSCTRL() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets SYSCTRL APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYSCTRL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets GCLK APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getGCLK() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets GCLK APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setGCLK(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets WDT APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWDT() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets WDT APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWDT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets RTC APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getRTC() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets RTC APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setRTC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets EIC APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEIC() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets EIC APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEIC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
      };
      
      /**
        APBB Mask
      */
      class APBBMASK {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets PAC1 APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPAC1() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets PAC1 APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPAC1(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets DSU APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDSU() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets DSU APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDSU(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets NVMCTRL APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getNVMCTRL() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets NVMCTRL APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setNVMCTRL(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets PORT APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPORT() volatile {
          return (raw & (0x1 << 3)) >> 3;
        }
        /**
          Sets PORT APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPORT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 3)) | ((value << 3) & (0x1 << 3));
        }
        /**
          Gets DMAC APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDMAC() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets DMAC APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDMAC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets USB APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getUSB() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets USB APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setUSB(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets HMATRIX APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getHMATRIX() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets HMATRIX APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setHMATRIX(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
      };
      
      /**
        APBC Mask
      */
      class APBCMASK {
        volatile unsigned long raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets SERCOM0 APB Clock Enable
          @param index in range 0..1
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSERCOM(int index) volatile {
          return (raw & (0x1 << (2 + 1 * (index - 0)))) >> (2 + 1 * (index - 0));
        }
        /**
          Sets SERCOM0 APB Clock Enable
          @param index in range 0..1
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSERCOM(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (2 + 1 * (index - 0)))) | ((value << (2 + 1 * (index - 0))) & (0x1 << (2 + 1 * (index - 0))));
        }
        /**
          Gets SERCOM0 APB Clock Enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getSERCOM() volatile {
          return (raw & (0x3 << 2)) >> 2;
        }
        /**
          Sets SERCOM0 APB Clock Enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setSERCOM(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 2)) | ((value << 2) & (0x3 << 2));
        }
        /**
          Gets TC1 APB Clock Enable
          @param index in range 1..2
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTC(int index) volatile {
          return (raw & (0x1 << (6 + 1 * (index - 1)))) >> (6 + 1 * (index - 1));
        }
        /**
          Sets TC1 APB Clock Enable
          @param index in range 1..2
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTC(int index, unsigned long value) volatile {
          raw = (raw & ~(0x1 << (6 + 1 * (index - 1)))) | ((value << (6 + 1 * (index - 1))) & (0x1 << (6 + 1 * (index - 1))));
        }
        /**
          Gets TC1 APB Clock Enable
          @return value in range 0..3
        */
        __attribute__((always_inline)) unsigned long getTC() volatile {
          return (raw & (0x3 << 6)) >> 6;
        }
        /**
          Sets TC1 APB Clock Enable
          @param value in range 0..3
        */
        __attribute__((always_inline)) unsigned long setTC(unsigned long value) volatile {
          raw = (raw & ~(0x3 << 6)) | ((value << 6) & (0x3 << 6));
        }
        /**
          Gets PAC2 APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPAC2() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets PAC2 APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPAC2(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets EVSYS APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEVSYS() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets EVSYS APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEVSYS(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets TCC0 APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getTCC0() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets TCC0 APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setTCC0(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets ADC APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getADC() volatile {
          return (raw & (0x1 << 8)) >> 8;
        }
        /**
          Sets ADC APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setADC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 8)) | ((value << 8) & (0x1 << 8));
        }
        /**
          Gets AC APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getAC() volatile {
          return (raw & (0x1 << 9)) >> 9;
        }
        /**
          Sets AC APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setAC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 9)) | ((value << 9) & (0x1 << 9));
        }
        /**
          Gets DAC APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getDAC() volatile {
          return (raw & (0x1 << 10)) >> 10;
        }
        /**
          Sets DAC APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setDAC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 10)) | ((value << 10) & (0x1 << 10));
        }
        /**
          Gets PTC APB Clock Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPTC() volatile {
          return (raw & (0x1 << 11)) >> 11;
        }
        /**
          Sets PTC APB Clock Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPTC(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 11)) | ((value << 11) & (0x1 << 11));
        }
      };
      
      /**
        Interrupt Enable Clear
      */
      class INTENCLR {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Clock Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCKRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Clock Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCKRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Clock Failure Detector Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCFD() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Clock Failure Detector Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCFD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        Interrupt Enable Set
      */
      class INTENSET {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Clock Ready Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCKRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Clock Ready Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCKRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Clock Failure Detector Interrupt Enable
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCFD() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Clock Failure Detector Interrupt Enable
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCFD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        Interrupt Flag Status and Clear
      */
      class INTFLAG {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Clock Ready
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCKRDY() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Clock Ready
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCKRDY(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Clock Failure Detector
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getCFD() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Clock Failure Detector
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setCFD(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
      };
      
      /**
        Reset Cause
      */
      class RCAUSE {
        volatile unsigned char raw;
        public:
        __attribute__((always_inline)) void operator= (unsigned long value) volatile {
          raw = value;
        }
        __attribute__((always_inline)) operator unsigned long () volatile {
          return raw;
        }
        /**
          Gets Power On Reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getPOR() volatile {
          return (raw & (0x1 << 0)) >> 0;
        }
        /**
          Sets Power On Reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setPOR(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 0)) | ((value << 0) & (0x1 << 0));
        }
        /**
          Gets Brown Out 12 Detector Reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOD12() volatile {
          return (raw & (0x1 << 1)) >> 1;
        }
        /**
          Sets Brown Out 12 Detector Reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOD12(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 1)) | ((value << 1) & (0x1 << 1));
        }
        /**
          Gets Brown Out 33 Detector Reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getBOD33() volatile {
          return (raw & (0x1 << 2)) >> 2;
        }
        /**
          Sets Brown Out 33 Detector Reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setBOD33(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 2)) | ((value << 2) & (0x1 << 2));
        }
        /**
          Gets External Reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getEXT() volatile {
          return (raw & (0x1 << 4)) >> 4;
        }
        /**
          Sets External Reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setEXT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 4)) | ((value << 4) & (0x1 << 4));
        }
        /**
          Gets Watchdog Reset
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getWDT() volatile {
          return (raw & (0x1 << 5)) >> 5;
        }
        /**
          Sets Watchdog Reset
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setWDT(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 5)) | ((value << 5) & (0x1 << 5));
        }
        /**
          Gets System Reset Request
          @return value in range 0..1
        */
        __attribute__((always_inline)) unsigned long getSYST() volatile {
          return (raw & (0x1 << 6)) >> 6;
        }
        /**
          Sets System Reset Request
          @param value in range 0..1
        */
        __attribute__((always_inline)) unsigned long setSYST(unsigned long value) volatile {
          raw = (raw & ~(0x1 << 6)) | ((value << 6) & (0x1 << 6));
        }
      };
    };
    class Peripheral {
      public:
      union {
        struct {
          /**
            Control
          */
          volatile reg::CTRL CTRL;
        };
        struct {
          volatile char _space_SLEEP[0x1];
          /**
            Sleep Mode
          */
          volatile reg::SLEEP SLEEP;
        };
        struct {
          volatile char _space_EXTCTRL[0x2];
          /**
            External Reset Controller
          */
          volatile reg::EXTCTRL EXTCTRL;
        };
        struct {
          volatile char _space_CPUSEL[0x8];
          /**
            CPU Clock Select
          */
          volatile reg::CPUSEL CPUSEL;
        };
        struct {
          volatile char _space_APBASEL[0x9];
          /**
            APBA Clock Select
          */
          volatile reg::APBASEL APBASEL;
        };
        struct {
          volatile char _space_APBBSEL[0xa];
          /**
            APBB Clock Select
          */
          volatile reg::APBBSEL APBBSEL;
        };
        struct {
          volatile char _space_APBCSEL[0xb];
          /**
            APBC Clock Select
          */
          volatile reg::APBCSEL APBCSEL;
        };
        struct {
          volatile char _space_AHBMASK[0x14];
          /**
            AHB Mask
          */
          volatile reg::AHBMASK AHBMASK;
        };
        struct {
          volatile char _space_APBAMASK[0x18];
          /**
            APBA Mask
          */
          volatile reg::APBAMASK APBAMASK;
        };
        struct {
          volatile char _space_APBBMASK[0x1c];
          /**
            APBB Mask
          */
          volatile reg::APBBMASK APBBMASK;
        };
        struct {
          volatile char _space_APBCMASK[0x20];
          /**
            APBC Mask
          */
          volatile reg::APBCMASK APBCMASK;
        };
        struct {
          volatile char _space_INTENCLR[0x34];
          /**
            Interrupt Enable Clear
          */
          volatile reg::INTENCLR INTENCLR;
        };
        struct {
          volatile char _space_INTENSET[0x35];
          /**
            Interrupt Enable Set
          */
          volatile reg::INTENSET INTENSET;
        };
        struct {
          volatile char _space_INTFLAG[0x36];
          /**
            Interrupt Flag Status and Clear
          */
          volatile reg::INTFLAG INTFLAG;
        };
        struct {
          volatile char _space_RCAUSE[0x38];
          /**
            Reset Cause
          */
          volatile reg::RCAUSE RCAUSE;
        };
      };
    };
  }
  
  extern pm::Peripheral PM;
}