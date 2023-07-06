# Mbed OS upload method configuration file for target RASPBERRY_PI_PICO_SWD.
# To change any of these parameters from their default values, set them in your build script between where you
# include app.cmake and where you add mbed os as a subdirectory.

# General config parameters
# -------------------------------------------------------------
set(UPLOAD_METHOD_DEFAULT OPENOCD)

# Config options for PYOCD
# -------------------------------------------------------------

set(PYOCD_UPLOAD_ENABLED TRUE)
set(PYOCD_TARGET_NAME rp2040_core0)
set(PYOCD_CLOCK_SPEED 4000k)

# Config options for OPENOCD
# -------------------------------------------------------------

set(OPENOCD_UPLOAD_ENABLED TRUE)
set(OPENOCD_CHIP_CONFIG_COMMANDS
    -f ${OpenOCD_SCRIPT_DIR}/interface/cmsis-dap.cfg
	-f ${OpenOCD_SCRIPT_DIR}/target/rp2040.cfg
	-c "gdb_breakpoint_override hard" # Make sure GDB uses HW breakpoints
	-c "adapter speed 4000"
)