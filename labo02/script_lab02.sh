#!/bin/bash

# En esta variable se retorna el ultimo dia del mes en cuestion mediante el comando date y pasando sus opciones
ultimodiadelmes=$(date -d "$(date +'%Y-%m-01')+1 month -1 day" '+%d')
# Retorno del nombre  del dia actual
dia=$(date '+%A')
# Fecha actual 
fecha=$(date '+%d')
#Mes actual
mes=$(date '+%B')
# Anho ya que no me escribe la enhe
anho=$(date '+%Y')
# Calculo de los dias faltantes a partir del numero del ultimo dia menos el numero de dia actual
diasfaltantes=$((ultimodiadelmes-fecha))
mes_siguiente=$(date -d "+1 month" '+%B')
echo "Hoy es $dia, $fecha de $mes, del año $anho, faltan $diasfaltantes dias para el mes de $mes_siguiente."


