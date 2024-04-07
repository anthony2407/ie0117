#!/bin/bash

# En esta variable se retorna el ultimo dia del mes en cuestion mediante el comando date y pasando sus opciones
ULTIMO_DIA_MES=$(date -d "$(date +'%Y-%m-01')+1 month -1 day" '+%d')
# Retorno del nombre  del dia actual
DIA=$(date '+%A')
# Fecha actual 
FECHA=$(date '+%d')
#Mes actual
MES=$(date '+%B')
# Anho ya que no me escribe la enhe
ANHO=$(date '+%Y')
# Calculo de los dias faltantes a partir del numero del ultimo dia menos el numero de dia actual
DIAS_FALTANTES=$((ULTIMO_DIA_MES-FECHA))
MES_SIGUIENTE=$(date -d "+1 month" '+%B')
echo "Hoy es $DIA, $FECHA de $MES, del anho $ANHO, faltan $DIAS_FALTANTES dias para el mes de $MES_SIGUIENTE."


