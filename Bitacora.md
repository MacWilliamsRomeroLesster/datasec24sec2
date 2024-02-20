# Bitácora seguridad de datos 
Elaborado por: Lesster Mac Williams Romero  ✌️(･ิﭛ‎ ･ิ)✌️

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
