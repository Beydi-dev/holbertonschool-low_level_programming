#!/bin/bash

echo "📦 Nettoyage de tous les fichiers .c et .h..."

for file in *.c *.h; do
    if [ -f "$file" ]; then
        echo "🔧 Nettoyage de $file"
        
        # Convertir CRLF (Windows) en LF (Unix)
        sed -i 's/\r$//' "$file"

        # Supprimer les espaces en fin de ligne
        sed -i 's/[ \t]*$//' "$file"

        # Vérifier s'il y a une ligne vide à la fin du fichier, sinon l'ajouter
        last_char=$(tail -c1 "$file")
        if [ "$last_char" != "" ]; then
            echo "" >> "$file"
        fi
    fi
done

echo "✅ Tous les fichiers ont été nettoyés pour Betty !"

