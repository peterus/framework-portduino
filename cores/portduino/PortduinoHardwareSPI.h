#ifndef PORTUINO_HARDWARE_H_
#define PORTUINO_HARDWARE_H_

#include <assert.h>

#include "HardwareSPI.h"
#include "SPIChip.h"
#include "Utility.h"
#include "logging.h"

namespace arduino {

class PortduinoSPI : public HardwareSPI {
public:
  virtual uint8_t  transfer(uint8_t data) final;
  virtual uint16_t transfer16(uint16_t data) final;
  virtual void     transfer(void *buf, size_t count) final;

  // Transaction Functions
  virtual void usingInterrupt(int interruptNumber) final;
  virtual void notUsingInterrupt(int interruptNumber) final;
  virtual void beginTransaction(SPISettings settings) final;
  virtual void endTransaction(void) final;

  // SPI Configuration methods
  virtual void attachInterrupt() final;
  virtual void detachInterrupt() final;

  virtual void begin() final;
  virtual void end() final;
};

extern PortduinoSPI SPI;

} // namespace arduino

#endif
