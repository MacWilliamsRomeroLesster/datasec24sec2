# Bitácora seguridad de datos 
Elaborado por: Lesster Mac Williams Romero  ✌️(･ิﭛ‎ ･ิ)✌️

# Parcial 1

## 15 de enero del 2024
Presentación de clase y ver plan de estudio

## 18 de enero del 2024
Traingulos:
* **CIA**:
  * Integridad
  * Confidencialidad
  * Avaibility

![alt text](https://www.f5.com/content/dam/f5-labs-v2/article/articles/edu/20190709_what_is_the_cia_triad/cia_triad.png)

* **Usability**:
  * Funcionalidad
  * Usabilidad
  * Seguridad

![alt text](https://cdn.getmidnight.com/d0f1c52a0107bd8707444bbf130a0234/2022/08/functionality-usability-security.webp)

**Equipos en un ataque (Information warfare)**
 * Atacantes (Rojo)
 * Defensores (Azul)
 * Intermediarios (Morados)
  
## 22 de enero del 2024

Instalación de ParrotSec en una máquina virtual.

![Alt text](<Elementos para Bitacora/Parrot.png>)

## 23 de enero del 2024

### Essential Terminology
* **Hack value**: Es aquello que es preciado para los "hackers".
* **Target of Evaluation**: Es aquel objetivo de un atacante como lo es las IT, productos, componentes, etc.
* **Exploit**: Se crea a partir de alguna vulnerabilidad existente dentro de la arquitectura.
* **Zero-day attack**: Aprovecharse de una vulnerabilidad antes que el desarrollador cree el parche de día 0.
* **Vulnerabilidad**: Existencia de alguna debilidad o un error de diseño/implementación, lo cual compromete la seguridad del sistema.
* **Daisy Chaning/Agentes**: Personas o grupo de personas que realizan actos hacia diferentes sistemas.


 **Autenticidad**: Comprobación de documentos para comprobar que eres realmente la persona o Usuario real.

 **Non-Repudiantes**: Personsas las cuales no pueden ser "delatadas" mediante diferentes mecanismos con el mismo fin.

 * SIEW: Registra todos los dipositivos en la red centralizandolos y correlacionandolos. También puede registrar y/o centralizar redes, sitios web, dispositivos, entre otros.

 **IDS**: Detecta un ataque y notifica al encargado.

 **IPS**: Te detecta un ataque y realiza una acción previamente programada en contra de dicha acción no admitida.

 > Ataque = Motivación (Meta) + Método + Vulnerabilidad

 **Tipos de amenazas**:
    
* Naturales
* Contra la seguridad física
* Humanas
* A nivel de red
* Host/Sistema
* de Aplicación


## 25 de enero del 2024

jaja sus cv´s
Ideas para CV´s:
  * No poner numero telefonico, ni fotografía
  * Poner hardskills y las softskills
  * Poner mi nivel en mis habilidades profesionales
  * Hacer el cv más lineal y que no haga tantos saltos
  * Poner quién certificó y quién expidió los titulos de los cursos
    * Poner numero de certificado
  * Si has trabajado con clientes en USA sirve aunque tu nivel de ingles no sea bueno
  * Usualmente se enfocan en el último trabajo que anotaste

## 01 de febrero del 2024

Hacer 4 preguntas en el template Kahoot



## 06 de febrero del 2024

**Escalamiento de privilegios**
Ganar acceso de administrador escalando por las diferentes capas de accesos, usualmente entrando desde la capa de usuario base hasta el admin. 

**Ransomware**
Encriptacion de los datos para pedir un rescate 

Los conocidos tienen Password-Key


Cómo tener tener seguro el sistema ante ranaomware:
* backups (offsite)
* Consentisación

**Seguridad por capas:**

Capas de accesos del modelo OSI

las amenazas pueden separarse en diferentes conjuntos de capas

**Tipos de respaldos**
* full
 * se guarda toda la información en su totalidad
* diferencial
 * cada tiempo pero agrega solo lo que se agrega después de hacer el respaldo full (lo nuevo)
* incremental
 * realiza lo mismo que el diferencial pero agrega cada menos tiempo la información agregada después del último diferencial

Por ejemplo: 
Bacula, AWS RDS, Amazon S3

## 15 de febrero del 2024

Protocolo LDAP/OpenLDAP permitiendo montar varios servicios de la "empresa" con un arbol de dominio.

Usuario de aplicación, no está asociado a una persona, sino que es un usuario que tiene la aplicación para que haga contacto con otros servicios/aplicaciones.

Usar PasswordManager (Usa Entropía Keepass)

Qué se puede instalar para evitar ataques hacia las password:
 Limitar el num de intentos (bloquear inicio de sesión)
  fail2ban

**Tipos de pentesting:**
Pueden ser internas o externas(su alcance).

 * Whitebox
 * Blackbox
 * Graybox

**Fases del hacking(Pentesting):**
 * de Reconocimiento(Footprinting)
   * Revisar toda la información disponible del objetivo. 
 * de Escaneo
   * 
 * de Ganar Acceso
   * 
 * de Mantener el Acceso
   * 
 * de Cubrir Huellas
   * 

# Parcial 2

## 20 de febrero del 2024

Aplicación (@, URL, URI)
Transporte (PORTS)
TCP Y UDP
Puertos
80 http
22 ssh
21 ftp
23 telnet
25 smtp
53 dns
3306 mysql
8080 tomcat

Red (IP)
Enlace de datos (MAC)
Física (NIC)

**Investigar que son los puertos efímeros y el problema de cuando se agotan**

**Puerto efímero**
Es un puerto de protocolo de transporte de corta duración para comunicaciones de Protocolo de internet (IP). Los puertos efímeros se asignan automáticamente desde un rango predefinido en la familia de protocolos de internet.

**Problema de cuando se agotan**
Cuando se agotan los puertos efímeros, es decir, cuando se han utilizado todos los puertos disponibles para realizar conexiones, cualquier intento nuevo de establecer una conexión producirá un error.


netstat -a -n -p TCP
Lista de puertos que escuchan locamente


utilizar nmap(escaneo a toda una red) o netcat(escaneo a un solo host) para escuchar puertos de una pc remota

nmap ip

nmap -pN ip

nmap -p- ip

nmap -sV ip

nslookup url

triple handshake

montar un Metasploitable2 en maquina virtual para probar los n maps 

## 27 de febrero del 2024

La computadora de alguien más (se almacena en la computadora de proveedores, los cuales son alquilados).

### **Informatica en la nube**

La **informatica en la nube** es la entrega bajo demanda de potencia de cómputo, bases de datos, almacenamiento, aplicaciones y otros recursos de TI, a través de internet con un sistema de precios de pago por uso.

Deja de ser una infraestructura como hardware y, en cambio se ve y se usa como software.

El **usuario de la nube** es aquel que tiene en poder la nube la cual es adquirida de un proveedor de la nube. (no confundir con el usuario que consume de nuestro servicio basado en la nube)

Infraestructura como software
- Se vuelve más flexible.
- Cambio más rápido y es más rentable.
- Terminan las tareas pesadas innecesarias.

### **Modelos de servicio en la nube**

**Pizza as a Service**

![alt text](https://imgs.search.brave.com/usj88kOgK0RPjJl7LJKQEoDM1uvoAQpAeI3USpghAVU/rs:fit:860:0:0/g:ce/aHR0cHM6Ly9pLnBp/bmltZy5jb20vb3Jp/Z2luYWxzLzljL2Y0/LzQ5LzljZjQ0OTBi/YjZmYzk4ZWY5ZWIx/ZmNhZmJkOGI1YTU5/LmpwZw)

Azul lo que soy responsable y lo Verde lo que se me provee.
Donde se toma en cuenta de qué somos responsables y qué el proveedor, lo cual dependerá qué tipo de servicio estamos utilizando.

### **Modelos principales**

Iaas PaaS SaaS

Más control sobre los recursos de TI
Menos control sobre los recursos de TI


**Modelos de implementación de informatica en la nube**

Nube pública, hibrida y privada.

**Pay as you go:** Modelo que pagas lo que usas

Dos **posibles escenarios**: 
- Capacidad del servidor sobrestimada (Sobran recursos por la baja demanda).
- Capacidad del servidor subestimada (No alcanza el suficiente servicio para la demanda). 


### **Servicios web:** 
Cualquier software que se ofrece a disposición a través de internet y utiliza un formato estandarizado para la solicitud y la respuesta de una interacción con la interfaz de programación de aplicaciones(API).

Existen diversas categorias de los servicios de AWS.

Para usar los servicios se tienen que tener una cuenta de AWS.

### **Formas de interactuar con AWS:**
- Consola de administración de AWS
- Interfaz de línea de comandos (AWS CLI)
- Kits de desarrollo de software (SDK)

Regiones de AWS es una zona geografica.


## 29 de febrero del 2024
AWS Cloud security:
- Confiability
- Auditability
- Agility and automation
- 

Servicio de AWS que permite mantener la auditabilidad: AWS Cloud Trial

**Diseños de principios de seguridad**

- Aplicar el principio del menor privilegio
  - Se le debe garantizar el acceso necesario para el usuario.
  - Hacer cumplit la separación de funciones
  - Evitar credenciales long-term (cambio de credenciales cada cierto tiempo)
- Activar la trazabilidad (capacidad de regresar o rastrear evento)
  - Monitoriar acciones y cambios.
  - Usar logs y metricas.
  - Auditar recursos en la nube.
- Mantener segura todas las capas

  No solo confiar en una capa de tu arquitectura.
  - Tener defensa en profundidad (no permitir al atacante avanzar en tus capas).
- Automatiza la seguridad

    Posibles casos como poner alertas cuando se burla una capa de seguridad.
  - Automatizar rutinas de seguridad como tareas.
  - Implementar infraestructura como código
- Proteger los datos en transito y en reposo.
  - Usar VPN o protocolos seguros (TLS)
  - Todos los datos deben viajar encriptados
- Ten un plan de respuesta de incidentes
- Minimizar la superficie de ataque

  Normas PCI, se debe segmentar los datos para que los datos no sean robados totalmente.

**Modelo de responsabilidad compartida**

MSO responsability model

## 05 de marzo del 2024

Hola mundo