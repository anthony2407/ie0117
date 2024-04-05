ultimodiadelmes=$(date -d "$(date +'%Y-%m-01')+1 month -1 day" '+%d')
dia=$(date '+%A')
fecha=$(date '+%d')
mes=$(date '+%B')
anho=$(date '+%Y')
diasfaltantes=$((ultimodiadelmes-fecha))
mes_siguiente=$(date -d "+1 month" '+%B')
echo "Hoy es $dia, $fecha de $mes, del año $anho, faltan $diasfaltantes dias para el mes de $mes_siguiente."


