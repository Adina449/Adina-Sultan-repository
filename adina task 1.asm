.model small
.stack 100h
.data
msg1 db 'Enter string= $'
msg2 db 13,10,'Reversed= $'
.code
main proc
mov ax,@data
mov ds,ax

lea dx,msg1
mov ah,9
int 21h

mov cx,0

read:
mov ah,1
int 21h
cmp al,13
je show
push ax
inc cx
jmp read

show:
lea dx,msg2
mov ah,9
int 21h

print:
pop dx
mov ah,2
int 21h
loop print

mov ah,4ch
int 21h
main endp
end main
