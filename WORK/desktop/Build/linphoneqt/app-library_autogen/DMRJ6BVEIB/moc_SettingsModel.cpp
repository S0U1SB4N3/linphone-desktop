/****************************************************************************
** Meta object code from reading C++ file 'SettingsModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../src/components/settings/SettingsModel.hpp"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SettingsModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SettingsModel_t {
    QByteArrayData data[123];
    char stringdata0[1906];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SettingsModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SettingsModel_t qt_meta_stringdata_SettingsModel = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SettingsModel"
QT_MOC_LITERAL(1, 14, 20), // "captureDeviceChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 6), // "device"
QT_MOC_LITERAL(4, 43, 21), // "playbackDeviceChanged"
QT_MOC_LITERAL(5, 65, 19), // "ringerDeviceChanged"
QT_MOC_LITERAL(6, 85, 15), // "ringPathChanged"
QT_MOC_LITERAL(7, 101, 4), // "path"
QT_MOC_LITERAL(8, 106, 30), // "echoCancellationEnabledChanged"
QT_MOC_LITERAL(9, 137, 6), // "status"
QT_MOC_LITERAL(10, 144, 18), // "videoDeviceChanged"
QT_MOC_LITERAL(11, 163, 18), // "videoPresetChanged"
QT_MOC_LITERAL(12, 182, 6), // "preset"
QT_MOC_LITERAL(13, 189, 21), // "videoFramerateChanged"
QT_MOC_LITERAL(14, 211, 9), // "framerate"
QT_MOC_LITERAL(15, 221, 22), // "videoDefinitionChanged"
QT_MOC_LITERAL(16, 244, 10), // "definition"
QT_MOC_LITERAL(17, 255, 23), // "autoAnswerStatusChanged"
QT_MOC_LITERAL(18, 279, 22), // "autoAnswerDelayChanged"
QT_MOC_LITERAL(19, 302, 5), // "delay"
QT_MOC_LITERAL(20, 308, 22), // "fileTransferUrlChanged"
QT_MOC_LITERAL(21, 331, 3), // "url"
QT_MOC_LITERAL(22, 335, 22), // "mediaEncryptionChanged"
QT_MOC_LITERAL(23, 358, 15), // "MediaEncryption"
QT_MOC_LITERAL(24, 374, 10), // "encryption"
QT_MOC_LITERAL(25, 385, 16), // "limeStateChanged"
QT_MOC_LITERAL(26, 402, 9), // "LimeState"
QT_MOC_LITERAL(27, 412, 5), // "state"
QT_MOC_LITERAL(28, 418, 20), // "dtmfsProtocolChanged"
QT_MOC_LITERAL(29, 439, 18), // "ipv6EnabledChanged"
QT_MOC_LITERAL(30, 458, 24), // "downloadBandWidthChanged"
QT_MOC_LITERAL(31, 483, 9), // "bandwidth"
QT_MOC_LITERAL(32, 493, 22), // "uploadBandWidthChanged"
QT_MOC_LITERAL(33, 516, 33), // "adaptiveRateControlEnabledCha..."
QT_MOC_LITERAL(34, 550, 14), // "tcpPortChanged"
QT_MOC_LITERAL(35, 565, 4), // "port"
QT_MOC_LITERAL(36, 570, 14), // "udpPortChanged"
QT_MOC_LITERAL(37, 585, 14), // "tlsPortChanged"
QT_MOC_LITERAL(38, 600, 21), // "audioPortRangeChanged"
QT_MOC_LITERAL(39, 622, 1), // "a"
QT_MOC_LITERAL(40, 624, 1), // "b"
QT_MOC_LITERAL(41, 626, 21), // "videoPortRangeChanged"
QT_MOC_LITERAL(42, 648, 17), // "iceEnabledChanged"
QT_MOC_LITERAL(43, 666, 18), // "turnEnabledChanged"
QT_MOC_LITERAL(44, 685, 17), // "stunServerChanged"
QT_MOC_LITERAL(45, 703, 6), // "server"
QT_MOC_LITERAL(46, 710, 15), // "turnUserChanged"
QT_MOC_LITERAL(47, 726, 4), // "user"
QT_MOC_LITERAL(48, 731, 19), // "turnPasswordChanged"
QT_MOC_LITERAL(49, 751, 8), // "password"
QT_MOC_LITERAL(50, 760, 14), // "dscpSipChanged"
QT_MOC_LITERAL(51, 775, 4), // "dscp"
QT_MOC_LITERAL(52, 780, 16), // "dscpAudioChanged"
QT_MOC_LITERAL(53, 797, 16), // "dscpVideoChanged"
QT_MOC_LITERAL(54, 814, 29), // "savedScreenshotsFolderChanged"
QT_MOC_LITERAL(55, 844, 6), // "folder"
QT_MOC_LITERAL(56, 851, 24), // "savedVideosFolderChanged"
QT_MOC_LITERAL(57, 876, 21), // "downloadFolderChanged"
QT_MOC_LITERAL(58, 898, 25), // "remoteProvisioningChanged"
QT_MOC_LITERAL(59, 924, 18), // "remoteProvisioning"
QT_MOC_LITERAL(60, 943, 28), // "remoteProvisioningNotChanged"
QT_MOC_LITERAL(61, 972, 18), // "exitOnCloseChanged"
QT_MOC_LITERAL(62, 991, 5), // "value"
QT_MOC_LITERAL(63, 997, 17), // "logsFolderChanged"
QT_MOC_LITERAL(64, 1015, 20), // "logsUploadUrlChanged"
QT_MOC_LITERAL(65, 1036, 18), // "logsEnabledChanged"
QT_MOC_LITERAL(66, 1055, 16), // "logsEmailChanged"
QT_MOC_LITERAL(67, 1072, 5), // "email"
QT_MOC_LITERAL(68, 1078, 14), // "captureDevices"
QT_MOC_LITERAL(69, 1093, 15), // "playbackDevices"
QT_MOC_LITERAL(70, 1109, 13), // "captureDevice"
QT_MOC_LITERAL(71, 1123, 14), // "playbackDevice"
QT_MOC_LITERAL(72, 1138, 12), // "ringerDevice"
QT_MOC_LITERAL(73, 1151, 8), // "ringPath"
QT_MOC_LITERAL(74, 1160, 23), // "echoCancellationEnabled"
QT_MOC_LITERAL(75, 1184, 12), // "videoDevices"
QT_MOC_LITERAL(76, 1197, 11), // "videoDevice"
QT_MOC_LITERAL(77, 1209, 11), // "videoPreset"
QT_MOC_LITERAL(78, 1221, 14), // "videoFramerate"
QT_MOC_LITERAL(79, 1236, 25), // "supportedVideoDefinitions"
QT_MOC_LITERAL(80, 1262, 15), // "videoDefinition"
QT_MOC_LITERAL(81, 1278, 16), // "autoAnswerStatus"
QT_MOC_LITERAL(82, 1295, 15), // "autoAnswerDelay"
QT_MOC_LITERAL(83, 1311, 15), // "fileTransferUrl"
QT_MOC_LITERAL(84, 1327, 15), // "limeIsSupported"
QT_MOC_LITERAL(85, 1343, 25), // "supportedMediaEncryptions"
QT_MOC_LITERAL(86, 1369, 15), // "mediaEncryption"
QT_MOC_LITERAL(87, 1385, 9), // "limeState"
QT_MOC_LITERAL(88, 1395, 18), // "useSipInfoForDtmfs"
QT_MOC_LITERAL(89, 1414, 18), // "useRfc2833ForDtmfs"
QT_MOC_LITERAL(90, 1433, 11), // "ipv6Enabled"
QT_MOC_LITERAL(91, 1445, 17), // "downloadBandwidth"
QT_MOC_LITERAL(92, 1463, 15), // "uploadBandwidth"
QT_MOC_LITERAL(93, 1479, 26), // "adaptiveRateControlEnabled"
QT_MOC_LITERAL(94, 1506, 7), // "tcpPort"
QT_MOC_LITERAL(95, 1514, 7), // "udpPort"
QT_MOC_LITERAL(96, 1522, 7), // "tlsPort"
QT_MOC_LITERAL(97, 1530, 14), // "audioPortRange"
QT_MOC_LITERAL(98, 1545, 10), // "QList<int>"
QT_MOC_LITERAL(99, 1556, 14), // "videoPortRange"
QT_MOC_LITERAL(100, 1571, 10), // "iceEnabled"
QT_MOC_LITERAL(101, 1582, 11), // "turnEnabled"
QT_MOC_LITERAL(102, 1594, 10), // "stunServer"
QT_MOC_LITERAL(103, 1605, 8), // "turnUser"
QT_MOC_LITERAL(104, 1614, 12), // "turnPassword"
QT_MOC_LITERAL(105, 1627, 7), // "dscpSip"
QT_MOC_LITERAL(106, 1635, 9), // "dscpAudio"
QT_MOC_LITERAL(107, 1645, 9), // "dscpVideo"
QT_MOC_LITERAL(108, 1655, 22), // "savedScreenshotsFolder"
QT_MOC_LITERAL(109, 1678, 17), // "savedVideosFolder"
QT_MOC_LITERAL(110, 1696, 14), // "downloadFolder"
QT_MOC_LITERAL(111, 1711, 11), // "exitOnClose"
QT_MOC_LITERAL(112, 1723, 10), // "logsFolder"
QT_MOC_LITERAL(113, 1734, 13), // "logsUploadUrl"
QT_MOC_LITERAL(114, 1748, 11), // "logsEnabled"
QT_MOC_LITERAL(115, 1760, 9), // "logsEmail"
QT_MOC_LITERAL(116, 1770, 19), // "MediaEncryptionNone"
QT_MOC_LITERAL(117, 1790, 19), // "MediaEncryptionDtls"
QT_MOC_LITERAL(118, 1810, 19), // "MediaEncryptionSrtp"
QT_MOC_LITERAL(119, 1830, 19), // "MediaEncryptionZrtp"
QT_MOC_LITERAL(120, 1850, 17), // "LimeStateDisabled"
QT_MOC_LITERAL(121, 1868, 18), // "LimeStateMandatory"
QT_MOC_LITERAL(122, 1887, 18) // "LimeStatePreferred"

    },
    "SettingsModel\0captureDeviceChanged\0\0"
    "device\0playbackDeviceChanged\0"
    "ringerDeviceChanged\0ringPathChanged\0"
    "path\0echoCancellationEnabledChanged\0"
    "status\0videoDeviceChanged\0videoPresetChanged\0"
    "preset\0videoFramerateChanged\0framerate\0"
    "videoDefinitionChanged\0definition\0"
    "autoAnswerStatusChanged\0autoAnswerDelayChanged\0"
    "delay\0fileTransferUrlChanged\0url\0"
    "mediaEncryptionChanged\0MediaEncryption\0"
    "encryption\0limeStateChanged\0LimeState\0"
    "state\0dtmfsProtocolChanged\0"
    "ipv6EnabledChanged\0downloadBandWidthChanged\0"
    "bandwidth\0uploadBandWidthChanged\0"
    "adaptiveRateControlEnabledChanged\0"
    "tcpPortChanged\0port\0udpPortChanged\0"
    "tlsPortChanged\0audioPortRangeChanged\0"
    "a\0b\0videoPortRangeChanged\0iceEnabledChanged\0"
    "turnEnabledChanged\0stunServerChanged\0"
    "server\0turnUserChanged\0user\0"
    "turnPasswordChanged\0password\0"
    "dscpSipChanged\0dscp\0dscpAudioChanged\0"
    "dscpVideoChanged\0savedScreenshotsFolderChanged\0"
    "folder\0savedVideosFolderChanged\0"
    "downloadFolderChanged\0remoteProvisioningChanged\0"
    "remoteProvisioning\0remoteProvisioningNotChanged\0"
    "exitOnCloseChanged\0value\0logsFolderChanged\0"
    "logsUploadUrlChanged\0logsEnabledChanged\0"
    "logsEmailChanged\0email\0captureDevices\0"
    "playbackDevices\0captureDevice\0"
    "playbackDevice\0ringerDevice\0ringPath\0"
    "echoCancellationEnabled\0videoDevices\0"
    "videoDevice\0videoPreset\0videoFramerate\0"
    "supportedVideoDefinitions\0videoDefinition\0"
    "autoAnswerStatus\0autoAnswerDelay\0"
    "fileTransferUrl\0limeIsSupported\0"
    "supportedMediaEncryptions\0mediaEncryption\0"
    "limeState\0useSipInfoForDtmfs\0"
    "useRfc2833ForDtmfs\0ipv6Enabled\0"
    "downloadBandwidth\0uploadBandwidth\0"
    "adaptiveRateControlEnabled\0tcpPort\0"
    "udpPort\0tlsPort\0audioPortRange\0"
    "QList<int>\0videoPortRange\0iceEnabled\0"
    "turnEnabled\0stunServer\0turnUser\0"
    "turnPassword\0dscpSip\0dscpAudio\0dscpVideo\0"
    "savedScreenshotsFolder\0savedVideosFolder\0"
    "downloadFolder\0exitOnClose\0logsFolder\0"
    "logsUploadUrl\0logsEnabled\0logsEmail\0"
    "MediaEncryptionNone\0MediaEncryptionDtls\0"
    "MediaEncryptionSrtp\0MediaEncryptionZrtp\0"
    "LimeStateDisabled\0LimeStateMandatory\0"
    "LimeStatePreferred"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SettingsModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
      48,  352, // properties
       2,  544, // enums/sets
       0,    0, // constructors
       0,       // flags
      42,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  224,    2, 0x06 /* Public */,
       4,    1,  227,    2, 0x06 /* Public */,
       5,    1,  230,    2, 0x06 /* Public */,
       6,    1,  233,    2, 0x06 /* Public */,
       8,    1,  236,    2, 0x06 /* Public */,
      10,    1,  239,    2, 0x06 /* Public */,
      11,    1,  242,    2, 0x06 /* Public */,
      13,    1,  245,    2, 0x06 /* Public */,
      15,    1,  248,    2, 0x06 /* Public */,
      17,    1,  251,    2, 0x06 /* Public */,
      18,    1,  254,    2, 0x06 /* Public */,
      20,    1,  257,    2, 0x06 /* Public */,
      22,    1,  260,    2, 0x06 /* Public */,
      25,    1,  263,    2, 0x06 /* Public */,
      28,    0,  266,    2, 0x06 /* Public */,
      29,    1,  267,    2, 0x06 /* Public */,
      30,    1,  270,    2, 0x06 /* Public */,
      32,    1,  273,    2, 0x06 /* Public */,
      33,    1,  276,    2, 0x06 /* Public */,
      34,    1,  279,    2, 0x06 /* Public */,
      36,    1,  282,    2, 0x06 /* Public */,
      37,    1,  285,    2, 0x06 /* Public */,
      38,    2,  288,    2, 0x06 /* Public */,
      41,    2,  293,    2, 0x06 /* Public */,
      42,    1,  298,    2, 0x06 /* Public */,
      43,    1,  301,    2, 0x06 /* Public */,
      44,    1,  304,    2, 0x06 /* Public */,
      46,    1,  307,    2, 0x06 /* Public */,
      48,    1,  310,    2, 0x06 /* Public */,
      50,    1,  313,    2, 0x06 /* Public */,
      52,    1,  316,    2, 0x06 /* Public */,
      53,    1,  319,    2, 0x06 /* Public */,
      54,    1,  322,    2, 0x06 /* Public */,
      56,    1,  325,    2, 0x06 /* Public */,
      57,    1,  328,    2, 0x06 /* Public */,
      58,    1,  331,    2, 0x06 /* Public */,
      60,    1,  334,    2, 0x06 /* Public */,
      61,    1,  337,    2, 0x06 /* Public */,
      63,    1,  340,    2, 0x06 /* Public */,
      64,    1,  343,    2, 0x06 /* Public */,
      65,    1,  346,    2, 0x06 /* Public */,
      66,    1,  349,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QVariantMap,   16,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Bool, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Int,   35,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   39,   40,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   39,   40,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   45,
    QMetaType::Void, QMetaType::QString,   47,
    QMetaType::Void, QMetaType::QString,   49,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Void, QMetaType::Int,   51,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void, QMetaType::QString,   59,
    QMetaType::Void, QMetaType::Bool,   62,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::QString,   67,

 // properties: name, type, flags
      68, QMetaType::QStringList, 0x00095401,
      69, QMetaType::QStringList, 0x00095401,
      70, QMetaType::QString, 0x00495103,
      71, QMetaType::QString, 0x00495103,
      72, QMetaType::QString, 0x00495103,
      73, QMetaType::QString, 0x00495103,
      74, QMetaType::Bool, 0x00495103,
      75, QMetaType::QStringList, 0x00095401,
      76, QMetaType::QString, 0x00495103,
      77, QMetaType::QString, 0x00495103,
      78, QMetaType::Int, 0x00495103,
      79, QMetaType::QVariantList, 0x00095401,
      80, QMetaType::QVariantMap, 0x00495103,
      81, QMetaType::Bool, 0x00495103,
      82, QMetaType::Int, 0x00495103,
      83, QMetaType::QString, 0x00495103,
      84, QMetaType::Bool, 0x00095401,
      85, QMetaType::QVariantList, 0x00095401,
      86, 0x80000000 | 23, 0x0049510b,
      87, 0x80000000 | 26, 0x0049510b,
      88, QMetaType::Bool, 0x00495103,
      89, QMetaType::Bool, 0x00495103,
      90, QMetaType::Bool, 0x00495103,
      91, QMetaType::Int, 0x00495103,
      92, QMetaType::Int, 0x00495103,
      93, QMetaType::Bool, 0x00495103,
      94, QMetaType::Int, 0x00495103,
      95, QMetaType::Int, 0x00495103,
      96, QMetaType::Int, 0x00495103,
      97, 0x80000000 | 98, 0x0049510b,
      99, 0x80000000 | 98, 0x0049510b,
     100, QMetaType::Bool, 0x00495103,
     101, QMetaType::Bool, 0x00495103,
     102, QMetaType::QString, 0x00495103,
     103, QMetaType::QString, 0x00495103,
     104, QMetaType::QString, 0x00495103,
     105, QMetaType::Int, 0x00495103,
     106, QMetaType::Int, 0x00495103,
     107, QMetaType::Int, 0x00495103,
      59, QMetaType::QString, 0x00495103,
     108, QMetaType::QString, 0x00495103,
     109, QMetaType::QString, 0x00495103,
     110, QMetaType::QString, 0x00495103,
     111, QMetaType::Bool, 0x00495103,
     112, QMetaType::QString, 0x00495103,
     113, QMetaType::QString, 0x00495103,
     114, QMetaType::Bool, 0x00495103,
     115, QMetaType::QString, 0x00495103,

 // properties: notify_signal_id
       0,
       0,
       0,
       1,
       2,
       3,
       4,
       0,
       5,
       6,
       7,
       0,
       8,
       9,
      10,
      11,
       0,
       0,
      12,
      13,
      14,
      14,
      15,
      16,
      17,
      18,
      19,
      20,
      21,
      22,
      23,
      24,
      25,
      26,
      27,
      28,
      29,
      30,
      31,
      35,
      32,
      33,
      34,
      37,
      38,
      39,
      40,
      41,

 // enums: name, flags, count, data
      23, 0x0,    4,  552,
      26, 0x0,    3,  560,

 // enum data: key, value
     116, uint(SettingsModel::MediaEncryptionNone),
     117, uint(SettingsModel::MediaEncryptionDtls),
     118, uint(SettingsModel::MediaEncryptionSrtp),
     119, uint(SettingsModel::MediaEncryptionZrtp),
     120, uint(SettingsModel::LimeStateDisabled),
     121, uint(SettingsModel::LimeStateMandatory),
     122, uint(SettingsModel::LimeStatePreferred),

       0        // eod
};

void SettingsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SettingsModel *_t = static_cast<SettingsModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->captureDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->playbackDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->ringerDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->ringPathChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->echoCancellationEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->videoDeviceChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->videoPresetChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->videoFramerateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->videoDefinitionChanged((*reinterpret_cast< const QVariantMap(*)>(_a[1]))); break;
        case 9: _t->autoAnswerStatusChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->autoAnswerDelayChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->fileTransferUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: _t->mediaEncryptionChanged((*reinterpret_cast< MediaEncryption(*)>(_a[1]))); break;
        case 13: _t->limeStateChanged((*reinterpret_cast< LimeState(*)>(_a[1]))); break;
        case 14: _t->dtmfsProtocolChanged(); break;
        case 15: _t->ipv6EnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->downloadBandWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 17: _t->uploadBandWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: { bool _r = _t->adaptiveRateControlEnabledChanged((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 19: _t->tcpPortChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->udpPortChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 21: _t->tlsPortChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->audioPortRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->videoPortRangeChanged((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 24: _t->iceEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->turnEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->stunServerChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 27: _t->turnUserChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 28: _t->turnPasswordChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 29: _t->dscpSipChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->dscpAudioChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 31: _t->dscpVideoChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->savedScreenshotsFolderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 33: _t->savedVideosFolderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->downloadFolderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->remoteProvisioningChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 36: _t->remoteProvisioningNotChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 37: _t->exitOnCloseChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->logsFolderChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 39: _t->logsUploadUrlChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 40: _t->logsEnabledChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 41: _t->logsEmailChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::captureDeviceChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::playbackDeviceChanged)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::ringerDeviceChanged)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::ringPathChanged)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::echoCancellationEnabledChanged)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::videoDeviceChanged)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::videoPresetChanged)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::videoFramerateChanged)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QVariantMap & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::videoDefinitionChanged)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::autoAnswerStatusChanged)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::autoAnswerDelayChanged)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::fileTransferUrlChanged)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(MediaEncryption );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::mediaEncryptionChanged)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(LimeState );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::limeStateChanged)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::dtmfsProtocolChanged)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::ipv6EnabledChanged)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::downloadBandWidthChanged)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::uploadBandWidthChanged)) {
                *result = 17;
                return;
            }
        }
        {
            typedef bool (SettingsModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::adaptiveRateControlEnabledChanged)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::tcpPortChanged)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::udpPortChanged)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::tlsPortChanged)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::audioPortRangeChanged)) {
                *result = 22;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::videoPortRangeChanged)) {
                *result = 23;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::iceEnabledChanged)) {
                *result = 24;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::turnEnabledChanged)) {
                *result = 25;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::stunServerChanged)) {
                *result = 26;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::turnUserChanged)) {
                *result = 27;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::turnPasswordChanged)) {
                *result = 28;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::dscpSipChanged)) {
                *result = 29;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::dscpAudioChanged)) {
                *result = 30;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::dscpVideoChanged)) {
                *result = 31;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::savedScreenshotsFolderChanged)) {
                *result = 32;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::savedVideosFolderChanged)) {
                *result = 33;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::downloadFolderChanged)) {
                *result = 34;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::remoteProvisioningChanged)) {
                *result = 35;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::remoteProvisioningNotChanged)) {
                *result = 36;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::exitOnCloseChanged)) {
                *result = 37;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::logsFolderChanged)) {
                *result = 38;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::logsUploadUrlChanged)) {
                *result = 39;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::logsEnabledChanged)) {
                *result = 40;
                return;
            }
        }
        {
            typedef void (SettingsModel::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SettingsModel::logsEmailChanged)) {
                *result = 41;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 30:
        case 29:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<int> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        SettingsModel *_t = static_cast<SettingsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QStringList*>(_v) = _t->getCaptureDevices(); break;
        case 1: *reinterpret_cast< QStringList*>(_v) = _t->getPlaybackDevices(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getCaptureDevice(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getPlaybackDevice(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getRingerDevice(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getRingPath(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->getEchoCancellationEnabled(); break;
        case 7: *reinterpret_cast< QStringList*>(_v) = _t->getVideoDevices(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->getVideoDevice(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getVideoPreset(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->getVideoFramerate(); break;
        case 11: *reinterpret_cast< QVariantList*>(_v) = _t->getSupportedVideoDefinitions(); break;
        case 12: *reinterpret_cast< QVariantMap*>(_v) = _t->getVideoDefinition(); break;
        case 13: *reinterpret_cast< bool*>(_v) = _t->getAutoAnswerStatus(); break;
        case 14: *reinterpret_cast< int*>(_v) = _t->getAutoAnswerDelay(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->getFileTransferUrl(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->getLimeIsSupported(); break;
        case 17: *reinterpret_cast< QVariantList*>(_v) = _t->getSupportedMediaEncryptions(); break;
        case 18: *reinterpret_cast< MediaEncryption*>(_v) = _t->getMediaEncryption(); break;
        case 19: *reinterpret_cast< LimeState*>(_v) = _t->getLimeState(); break;
        case 20: *reinterpret_cast< bool*>(_v) = _t->getUseSipInfoForDtmfs(); break;
        case 21: *reinterpret_cast< bool*>(_v) = _t->getUseRfc2833ForDtmfs(); break;
        case 22: *reinterpret_cast< bool*>(_v) = _t->getIpv6Enabled(); break;
        case 23: *reinterpret_cast< int*>(_v) = _t->getDownloadBandwidth(); break;
        case 24: *reinterpret_cast< int*>(_v) = _t->getUploadBandwidth(); break;
        case 25: *reinterpret_cast< bool*>(_v) = _t->getAdaptiveRateControlEnabled(); break;
        case 26: *reinterpret_cast< int*>(_v) = _t->getTcpPort(); break;
        case 27: *reinterpret_cast< int*>(_v) = _t->getUdpPort(); break;
        case 28: *reinterpret_cast< int*>(_v) = _t->getTlsPort(); break;
        case 29: *reinterpret_cast< QList<int>*>(_v) = _t->getAudioPortRange(); break;
        case 30: *reinterpret_cast< QList<int>*>(_v) = _t->getVideoPortRange(); break;
        case 31: *reinterpret_cast< bool*>(_v) = _t->getIceEnabled(); break;
        case 32: *reinterpret_cast< bool*>(_v) = _t->getTurnEnabled(); break;
        case 33: *reinterpret_cast< QString*>(_v) = _t->getStunServer(); break;
        case 34: *reinterpret_cast< QString*>(_v) = _t->getTurnUser(); break;
        case 35: *reinterpret_cast< QString*>(_v) = _t->getTurnPassword(); break;
        case 36: *reinterpret_cast< int*>(_v) = _t->getDscpSip(); break;
        case 37: *reinterpret_cast< int*>(_v) = _t->getDscpAudio(); break;
        case 38: *reinterpret_cast< int*>(_v) = _t->getDscpVideo(); break;
        case 39: *reinterpret_cast< QString*>(_v) = _t->getRemoteProvisioning(); break;
        case 40: *reinterpret_cast< QString*>(_v) = _t->getSavedScreenshotsFolder(); break;
        case 41: *reinterpret_cast< QString*>(_v) = _t->getSavedVideosFolder(); break;
        case 42: *reinterpret_cast< QString*>(_v) = _t->getDownloadFolder(); break;
        case 43: *reinterpret_cast< bool*>(_v) = _t->getExitOnClose(); break;
        case 44: *reinterpret_cast< QString*>(_v) = _t->getLogsFolder(); break;
        case 45: *reinterpret_cast< QString*>(_v) = _t->getLogsUploadUrl(); break;
        case 46: *reinterpret_cast< bool*>(_v) = _t->getLogsEnabled(); break;
        case 47: *reinterpret_cast< QString*>(_v) = _t->getLogsEmail(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        SettingsModel *_t = static_cast<SettingsModel *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setCaptureDevice(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setPlaybackDevice(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setRingerDevice(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setRingPath(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setEchoCancellationEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setVideoDevice(*reinterpret_cast< QString*>(_v)); break;
        case 9: _t->setVideoPreset(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setVideoFramerate(*reinterpret_cast< int*>(_v)); break;
        case 12: _t->setVideoDefinition(*reinterpret_cast< QVariantMap*>(_v)); break;
        case 13: _t->setAutoAnswerStatus(*reinterpret_cast< bool*>(_v)); break;
        case 14: _t->setAutoAnswerDelay(*reinterpret_cast< int*>(_v)); break;
        case 15: _t->setFileTransferUrl(*reinterpret_cast< QString*>(_v)); break;
        case 18: _t->setMediaEncryption(*reinterpret_cast< MediaEncryption*>(_v)); break;
        case 19: _t->setLimeState(*reinterpret_cast< LimeState*>(_v)); break;
        case 20: _t->setUseSipInfoForDtmfs(*reinterpret_cast< bool*>(_v)); break;
        case 21: _t->setUseRfc2833ForDtmfs(*reinterpret_cast< bool*>(_v)); break;
        case 22: _t->setIpv6Enabled(*reinterpret_cast< bool*>(_v)); break;
        case 23: _t->setDownloadBandwidth(*reinterpret_cast< int*>(_v)); break;
        case 24: _t->setUploadBandwidth(*reinterpret_cast< int*>(_v)); break;
        case 25: _t->setAdaptiveRateControlEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 26: _t->setTcpPort(*reinterpret_cast< int*>(_v)); break;
        case 27: _t->setUdpPort(*reinterpret_cast< int*>(_v)); break;
        case 28: _t->setTlsPort(*reinterpret_cast< int*>(_v)); break;
        case 29: _t->setAudioPortRange(*reinterpret_cast< QList<int>*>(_v)); break;
        case 30: _t->setVideoPortRange(*reinterpret_cast< QList<int>*>(_v)); break;
        case 31: _t->setIceEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 32: _t->setTurnEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 33: _t->setStunServer(*reinterpret_cast< QString*>(_v)); break;
        case 34: _t->setTurnUser(*reinterpret_cast< QString*>(_v)); break;
        case 35: _t->setTurnPassword(*reinterpret_cast< QString*>(_v)); break;
        case 36: _t->setDscpSip(*reinterpret_cast< int*>(_v)); break;
        case 37: _t->setDscpAudio(*reinterpret_cast< int*>(_v)); break;
        case 38: _t->setDscpVideo(*reinterpret_cast< int*>(_v)); break;
        case 39: _t->setRemoteProvisioning(*reinterpret_cast< QString*>(_v)); break;
        case 40: _t->setSavedScreenshotsFolder(*reinterpret_cast< QString*>(_v)); break;
        case 41: _t->setSavedVideosFolder(*reinterpret_cast< QString*>(_v)); break;
        case 42: _t->setDownloadFolder(*reinterpret_cast< QString*>(_v)); break;
        case 43: _t->setExitOnClose(*reinterpret_cast< bool*>(_v)); break;
        case 44: _t->setLogsFolder(*reinterpret_cast< QString*>(_v)); break;
        case 45: _t->setLogsUploadUrl(*reinterpret_cast< QString*>(_v)); break;
        case 46: _t->setLogsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 47: _t->setLogsEmail(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject SettingsModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SettingsModel.data,
      qt_meta_data_SettingsModel,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *SettingsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SettingsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SettingsModel.stringdata0))
        return static_cast<void*>(const_cast< SettingsModel*>(this));
    return QObject::qt_metacast(_clname);
}

int SettingsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 42;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 48;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 48;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 48;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 48;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 48;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void SettingsModel::captureDeviceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SettingsModel::playbackDeviceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SettingsModel::ringerDeviceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SettingsModel::ringPathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void SettingsModel::echoCancellationEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void SettingsModel::videoDeviceChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void SettingsModel::videoPresetChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void SettingsModel::videoFramerateChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void SettingsModel::videoDefinitionChanged(const QVariantMap & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void SettingsModel::autoAnswerStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void SettingsModel::autoAnswerDelayChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void SettingsModel::fileTransferUrlChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void SettingsModel::mediaEncryptionChanged(MediaEncryption _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void SettingsModel::limeStateChanged(LimeState _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void SettingsModel::dtmfsProtocolChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void SettingsModel::ipv6EnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void SettingsModel::downloadBandWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void SettingsModel::uploadBandWidthChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
bool SettingsModel::adaptiveRateControlEnabledChanged(bool _t1)
{
    bool _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
    return _t0;
}

// SIGNAL 19
void SettingsModel::tcpPortChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void SettingsModel::udpPortChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void SettingsModel::tlsPortChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void SettingsModel::audioPortRangeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void SettingsModel::videoPortRangeChanged(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void SettingsModel::iceEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void SettingsModel::turnEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}

// SIGNAL 26
void SettingsModel::stunServerChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 26, _a);
}

// SIGNAL 27
void SettingsModel::turnUserChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 27, _a);
}

// SIGNAL 28
void SettingsModel::turnPasswordChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 28, _a);
}

// SIGNAL 29
void SettingsModel::dscpSipChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 29, _a);
}

// SIGNAL 30
void SettingsModel::dscpAudioChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 30, _a);
}

// SIGNAL 31
void SettingsModel::dscpVideoChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 31, _a);
}

// SIGNAL 32
void SettingsModel::savedScreenshotsFolderChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 32, _a);
}

// SIGNAL 33
void SettingsModel::savedVideosFolderChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 33, _a);
}

// SIGNAL 34
void SettingsModel::downloadFolderChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 34, _a);
}

// SIGNAL 35
void SettingsModel::remoteProvisioningChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 35, _a);
}

// SIGNAL 36
void SettingsModel::remoteProvisioningNotChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 36, _a);
}

// SIGNAL 37
void SettingsModel::exitOnCloseChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 37, _a);
}

// SIGNAL 38
void SettingsModel::logsFolderChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 38, _a);
}

// SIGNAL 39
void SettingsModel::logsUploadUrlChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 39, _a);
}

// SIGNAL 40
void SettingsModel::logsEnabledChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 40, _a);
}

// SIGNAL 41
void SettingsModel::logsEmailChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 41, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
