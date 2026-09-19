@echo off
title School Management System
echo.
echo ============================================
echo   School Management System - Starting...
echo ============================================
echo.
echo Starting Streamlit server...
echo Browser will open at: http://localhost:8501
echo.
echo (Keep this window open while using the app)
echo (Press Ctrl+C to stop the server)
echo.

"C:\Users\dell\AppData\Local\Programs\Python\Python313\Scripts\streamlit.exe" run "C:\Users\dell\.bob\playground\school_management\app.py" --server.port 8501 --server.headless false

pause
