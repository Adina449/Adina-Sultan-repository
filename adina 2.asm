.model small
.stack 100h
.data
nums dw 450,0,487,101,500,0,359,0,458
.code
main proc
    mov ax,@data
    mov ds,ax

    mov si,offset nums
    mov cx,9

again:
    mov ax,[si]
    cmp ax,0
    je skip
    call print_num
    mov dl,' '   
    mov ah,2
    int 21h
skip:
    add si,2
    loop again

    mov ah,4ch
    int 21h
main endp

print_num proc
    push ax
    push bx
    push cx
    push dx

    mov bx,10
    xor cx,cx
.loop1:
    xor dx,dx
    div bx
    push dx
    inc cx
    cmp ax,0
    jne .loop1

.print:
    pop dx
    add dl,'0'
    mov ah,2
    int 21h
    loop .print  
    
  pop dx
  pop bx
  pop cx
  pop ax
    ret
print_num endp
end main
