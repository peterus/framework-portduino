#ifndef SIM_HARDWARE_SERIAL_H_
#define SIM_HARDWARE_SERIAL_H_

#include "HardwareSerial.h"

class SimSerial : public HardwareSerial {
public:
  virtual void   begin(unsigned long baudrate) final;
  virtual void   begin(unsigned long baudrate, uint16_t config) final;
  virtual void   end() final;
  virtual int    available(void) final;
  virtual int    peek(void) final;
  virtual int    read(void) final;
  virtual void   flush(void) final;
  virtual size_t write(uint8_t) final;
  using Print::write;
  virtual operator bool() final;
  size_t  printf(const char *format, ...);
};

extern SimSerial Serial;

#endif
