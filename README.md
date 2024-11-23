# Mapbot

**Mapbot** es un proyecto desarrollado para trabajar con ROS2 y tecnologías relacionadas, con el objetivo de construir un robot educativo que enseñe conceptos como control de sistemas, odometría, mapeo y SLAM.

## Características

- **Control del robot**: Integración con ROS2 para controlar los movimientos del robot.
- **SLAM**: Implementación de algoritmos para mapeo y localización simultáneos.
- **Sensor LiDAR**: Uso de un sensor LiDAR para la generación de mapas en tiempo real.
- **Interfaz educativa**: Diseño orientado a facilitar la enseñanza de conceptos clave en robótica.

## Requisitos previos

Antes de instalar y ejecutar Mapbot, asegúrate de tener instalados los siguientes componentes:

- **Sistema operativo**: Ubuntu 22.04 o compatible.
- **ROS2 Iron**: Instalado y configurado correctamente. [Instrucciones de instalación](https://docs.ros.org/en/iron/Installation.html).
- **Colcon**: Herramienta de compilación para paquetes ROS2.
- **Python 3.x**: Requerido para algunos scripts y herramientas.
- **Dependencias de ROS2**: Instala las dependencias del proyecto ejecutando:
  ```bash
  rosdep install --from-paths src --ignore-src -r -y
  ```

## Instalación

Sigue estos pasos para instalar y configurar Mapbot:

1. **Clona el repositorio**:
   ```bash
   git clone https://github.com/JTSoria1603/Mapbot.git
   ```
2. **Navega al directorio del proyecto**:
   ```bash
   cd Mapbot
   ```
3. **Instala las dependencias del proyecto**:
   ```bash
   rosdep install --from-paths src --ignore-src -r -y
   ```
4. **Compila el proyecto**:
   ```bash
   colcon build
   ```
5. **Sourcing del entorno**: Ejecuta este comando antes de lanzar los nodos:
   ```bash
   source install/setup.bash
   ```

## Uso

1. **Lanzar el robot**:
   Utiliza los siguientes comandos para lanzar el robot y comenzar con el mapeo:
   ```bash
   ros2 launch mapbot_bringup bringup.launch.py
   ```
   (Asegúrate de que el archivo de lanzamiento esté configurado correctamente).

2. **Visualizar los datos**:
   Usa RViz2 para visualizar el mapa generado por el robot:
   ```bash
   rviz2
   ```

3. **Personalización**:
   - Edita los archivos en `src/` para ajustar la configuración del robot según tus necesidades.
   - Configura parámetros específicos en los archivos `.yaml` para los nodos.

## Estructura del proyecto

```plaintext
Mapbot/
├── src/
│   ├── cam_package/
│   ├── my_package/
│   └── ...
├── install/
├── build/
├── README.md
├── LICENSE
└── .gitignore
```

## Contribuciones

Las contribuciones son bienvenidas. Si deseas colaborar, por favor:

1. Haz un fork del repositorio.
2. Crea una nueva rama para tu funcionalidad o corrección de errores:
   ```bash
   git checkout -b nombre-de-tu-rama
   ```
3. Realiza tus cambios y haz commit de los mismos:
   ```bash
   git commit -m "Descripción de tus cambios"
   ```
4. Sube tus cambios a tu repositorio fork:
   ```bash
   git push origin nombre-de-tu-rama
   ```
5. Abre un Pull Request en este repositorio.

## Licencia

Este proyecto está licenciado bajo la Licencia MIT. Consulta el archivo `LICENSE` para más detalles.

## Contacto

Para preguntas o sugerencias, por favor contactame a través de juantomas.soria@outlook.es

