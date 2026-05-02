#include<stdio.h>
#include<stdint.h>

// Con trỏ hằng const trỏ đến 1 địa chỉ phần cứng cụ thể => không thể thay đổi địa chỉ này trong chương trình
// Và giá trị tại địa chỉ này có thể thay đổi bất cứ lúc nào
// Ép kiểu hằng số địa chỉ thành con trỏ vào vùng volatile uint32_t 
volatile uint32_t* const pHardwareRegister = (volatile uint32_t*)0x40000000;

void writeToHardwareRegister(uint32_t value) {
    *pHardwareRegister = value; // Write value to the hardware register
}

uint32_t readFromHardwareRegister(void) {
    return *pHardwareRegister; // Read value from the hardware register
}

int main() {
    // Write a value to the hardware register
    writeToHardwareRegister(0x12345678);
    
    // Read the value back from the hardware register
    uint32_t value = readFromHardwareRegister();
    
    // Print the value read from the hardware register
    printf("Value read from hardware register: 0x%X\n", value);
    
    return 0;
}