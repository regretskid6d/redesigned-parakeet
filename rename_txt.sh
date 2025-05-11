#!/bin/bash
for f in *.TXT; do
  mv "$f" "${f%.TXT}.txt"
done
echo "✅ Renamed all .TXT to .txt"
