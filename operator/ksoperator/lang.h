
#ifndef ___LANG_H___
#define ___LANG_H___


#define S_ERR                     "Ошибка"
#define S_INFO                    "Сообщение"
#define S_QUESTION                "Вопрос"
#define S_HIDEWINDOW              "Спрятать окно"
#define S_SHOWWINDOW              "Показать окно"
#define S_CLOSEWINDOW             "Выход"
#define S_EXECCMDLINE             "Выполнить команду на клиентской машине"
#define S_ENTERCMDLINE            "Введите строку запуска:"
#define S_EXECREGFILE             "Добавить данные в реестр"
#define S_ENTERNETPATH            "Введите СЕТЕВОЙ путь к файлу:"
#define S_EXECBATFILE             "Запуск файла скрипта на клиентской машине"
#define S_ADMINRIGHTS             "Программу необходимо запускать из-под учетной записи администратора"
#define S_TURNSHELLONLOGOFF       "Эффект наступит после следующего входа пользователя в систему"
#define S_TURNSHELLOFFLOGOFF      "Эффект наступит после следующего входа пользователя в систему\n(НЕЛЬЗЯ выполнять жесткий/форсированный LogOff в этом случае!)"
#define S_CONFIRMTIMESYNC         "Установить на клиентских машинах %02d.%02d.%04d %02d:%02d ?"
#define S_CONFIRMCLEAREXECSTAT    "Очистить локальную статистику запуска программ?"
#define S_CONFIRMDELETEFILES      "Удалить заранее установленные в настройках папки на клиентских машинах?"
#define S_CONFIRMKILLTASKS        "Снять все задачи при выполнении операции?"
#define S_PAUSE                   "Приостановить\tПробел"
#define S_FULLSCREEN              "Во весь экран\tF"
#define S_UPDATESPEED             "Скорость обновления"
#define S_RCLICKHELP              "(правый клик - меню)"
#define S_PAUSED                  "ПАУЗА"
#define S_VIDEOCONTROL            "Видеонаблюдение"
#define S_SCREENCONTROL           "Наблюдение экрана"
#define S_CALLOPERATOR            "Клиент (посетитель) вызывает администратора"
#define S_CALLOPERATORTEXT        "Подойдите к клиенту \"%s\\%s (%s\\%s)\""
#define S_NETBURN                 "Необходимо записать диск клиенту"
#define S_NETBURNTEXT             "Клиенту \"%s\\%s (%s\\%s)\" необходимо записать диск с образа:\n\n%s\n\nЗапустить программу записи дисков?"
#define S_SHELLNOTINSTALLED       "Шелл оператора не установлен на этом компьютере"
#define S_NETBT                   "Необходимо загрузить файлы клиента через Bluetooth"
#define S_NETBTTEXT               "Клиенту \"%s\\%s (%s\\%s)\" необходимо загрузить файлы через Bluetooth из папки:\n\n%s\n\nЗапустить программу работы с Bluetooth?"
#define S_ERRNOBTFILES            "Не найдены файлы для загрузки"
#define S_NETDATARETRIVAL         "Сбор данных"
#define S_STOP                    "Стоп"
#define S_NETDATARETRIEVED        "Данные получены от %d машин из %d"
#define S_NOTDATARECVD            "Нет полученных данных"
#define S_NETPARM_MACHINEID       "MachineId_InternalParm"
#define S_NETPARM_SCREEN          "Screen_InternalParm"
#define S_NETPARM_WEBCAM          "Webcam_InternalParm"
#define S_FIELD_MACHINEID         "Машина/пользователь"
#define S_FIELD_HWINFO            "Оборудование"
#define S_FIELD_COMPSETTINGS      "Настройки (для компьютера)"
#define S_FIELD_USERSETTINGS      "Настройки (для пользователя)"
#define S_FIELD_RUNPADVER         "Версия клиента"
#define S_FIELD_DISKSSPACE        "Свободное место"
#define S_FIELD_CPUTEMP           "Температура CPU"
#define S_FIELD_GPUTEMP           "Температура видео"
#define S_FIELD_MBMTEMP           "Температура MB"
#define S_FIELD_CPUCOOLER         "Обороты кулера"
#define S_FIELD_SCREEN            "Скриншот экрана"
#define S_FIELD_WEBCAM            "Изображение с веб-камеры"
#define S_FIELD_OURSERVICES       "Установленные сервисы"
#define S_FIELD_RLBVERSION        "Версия драйвера"
#define S_FIELD_RLBLICENSE        "Лицензия Rollback"
#define S_FIELD_RLBDRVNOW         "Драйвер сейчас"
#define S_FIELD_RLBDRVAFTER       "Драйвер после перезагрузки"
#define S_FIELD_RLBRLBNOW         "Откат сейчас"
#define S_FIELD_RLBRLBAFTER       "Откат после перезагрузки"
#define S_FIELD_RLBDISKS          "Диски для отката"
#define S_FIELD_RLBPATHS          "Исключения"
#define S_TITLE_MACHINESINFO      "Общая информация о машинах и пользователях"
#define S_TITLE_ROLLBACKINFO      "Информация о текущем состоянии модуля Rollback (откат)"
#define S_TITLE_SCREENS           "Текущие скриншоты экранов пользователей"
#define S_TITLE_WEBCAMS           "Изображения с веб-камер пользователей"
#define S_TURNSHELLFORSELFCONFIRM "Среди выбранных машин есть Ваша машина.\nЕсли шелл на нее будет включен, то нужно убедиться, что данная программа оператора поставлена в автозагрузку или есть возможность запустить ее из-под шелла.\nВ противном случае отключить шелл с этой машины будет невозможно!!!\n\nПродолжить?"
#define S_CONFIRM_KILLALLTASKS    "Снять все задачи?"
#define S_CONFIRM_OFFSHELL        "Отключить шелл?\n(функция не будет иметь силы если шелл включался на всех пользователей машины, а не на этом конкретном)"
#define S_CONFIRM_TEMPOFFSHELL    "Отключить временно шелл (до перезагрузки или завершения сеанса)?"
#define S_CONFIRM_OFFAUTOLOGON    "Отключить автологон?"
#define S_APPNOTINSTALLED         "Приложение не установлено"
#define S_NORFMATALL              "Среди выбранных машин есть такие, на которых сервис удаленного файлового менеджера не установлен.\n\nВыполнить запуск программы для остальных машин?"
#define S_RDNOTINSTALLEDONMACHINE "На удаленной машине сервис управления рабочим столом не установлен"
#define S_CLIENTUPDATEFORSELFCONFIRM "Среди выбранных машин есть Ваша машина и выбрано обновление с перезагрузкой.\n\nНажмите \"ОК\" чтобы выполнить обновление, но БЕЗ перезагрузок\nНажмите \"Отмена\" для отмены операции"
#define S_CLIENTUPDATEMAX         "Не рекомендуется обновлять одновременно большое число машин из-за возможной нагрузки сети.\n\nПродолжить?"
#define S_RLBHELP  \
"\"Текущий статус отката\"\n" \
"На выбранных машинах показывает всю информацию относительно текущего состояния Rollback-драйвера, включения отката, настроек и пр.\n" \
"\n" \
"\"Сохранить на одну перезагрузку\"\n" \
"На выбранных машинах временно отключает откат с сохранением всех текущих и последующих до первой перезагрузки изменений на дисках.\n" \
"Таким образом, все изменения на дисках до первой перезагрузки будут сохранены. А после нее откат будет включен в обычном режиме.\n" \
"Рекомендуется использовать когда нужно изменить какие-то настройки системы или установить программы, не требующие перезагрузки после своей установки.\n" \
"После установки такого ПО рекомендуется не забыть сделать перезагрузку, чтобы откат был включен снова и все изменения сохранились.\n" \
"Нельзя использовать для Windows Update (используйте \"Сохранить на две перезагрузки\").\n" \
"Проверить текущее состояние отката всегда можно по команде \"Текущий статус отката\".\n" \
"\n" \
"\"Сохранить на две перезагрузки\"\n" \
"На выбранных машинах временно отключает откат с сохранением всех текущих и последующих до второй перезагрузки изменений на дисках.\n" \
"Таким образом, все изменения на дисках до второй перезагрузки будут сохранены. А после нее откат будет включен в обычном режиме.\n" \
"Рекомендуется использовать когда нужно изменить какие-то настройки системы, сделать Windows Update или установить программы, требующие перезагрузку после своей установки.\n" \
"После установки такого ПО рекомендуется не забыть сделать перезагрузку (она будет второй), чтобы откат был включен снова и все изменения сохранились.\n" \
"При обновлении клиентской части Runpad Pro через программу оператора этот режим включается автоматически, т.к. обновление клиента Runpad Pro требует перезагрузки.\n" \
"Проверить текущее состояние отката всегда можно по команде \"Текущий статус отката\".\n"
#define S_RLBSAVE1CONFIRM         "Отключить временно откат с сохранением изменений до первой перезагрузки?"
#define S_RLBSAVE2CONFIRM         "Отключить временно откат с сохранением изменений до второй перезагрузки?"

                                   

#endif