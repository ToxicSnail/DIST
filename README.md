# DIST_lab1
В этой лабораторной работе было необходимо прийти от небезопасной реализации программ по SOLID, к правильной реализации.

---
### **1) classProduct - несоблюдение принципа единственной ответственности**

---
### **2) classImageHelper - несоблюдение принципа единственной ответственности**
Проблема реализации - функция `GOD`.
У нас объект знает и умеет делать все, что только можно, что нарушает принцип единственной ответственности, ведь он предназначен для борьбы со сложностью.
Главная идея состоит в разбиении на отдельные классы огромного класса. Каждый новый класс отвечает за свою задачу, относится к одной функциональности, не связанной с другими.

---
### 3) classSmtpMailer - несоблюдение принципа открытости-закрытости

---
### 4) classRepository - несоблюдение принципа открытости-закрытости



---
