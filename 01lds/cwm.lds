SECTIONS
{
. = 0x30000000;
.text : {*(.text)}
.rodata ALIGN(4): {*(.rodata)}
.data ALIGN(4): {*(.data)}

. = 0x40000000;
__common_data_start = .;
.common_data : {*(.common_data)}
__common_data_end = .;

. = ALIGN(4);
__bss_start = .;
.bss (NOLOAD): {*(.bss) . = ALIGN(4);}
__bss_end = .;
}
