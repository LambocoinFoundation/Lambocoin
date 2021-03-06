#include <QtGlobal>
// Automatically generated by extract_strings.py
#ifdef __GNUC__
#define UNUSED __attribute__((unused))
#else
#define UNUSED
#endif
static const char UNUSED *bitcoin_strings[] = {
QT_TRANSLATE_NOOP("bitcoin-core", ""
"%s, you must set a rpcpassword in the configuration file:\n"
" %s\n"
"It is recommended you use the following random password:\n"
"rpcuser=Lambocoinrpc\n"
"rpcpassword=%s\n"
"(you do not need to remember this password)\n"
"The username and password MUST NOT be the same.\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions.\n"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Accept command line and JSON-RPC commands (enabled on daemon by default)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Acceptable ciphers (default: TLSv1+HIGH:!SSLv2:!aNULL:!eNULL:!AH:!3DES:"
"@STRENGTH)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Cannot obtain a lock on data directory %s.  Lambocoin is probably already "
"running."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: The transaction was rejected.  This might happen if some of the coins "
"in your wallet were already spent, such as if you used a copy of wallet.dat "
"and coins were spent in the copy but not marked as spent here."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: This transaction requires a transaction fee of at least %s because of "
"its amount, complexity, or use of recently received funds  "),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Error: Wallet unlocked for block minting only, unable to create transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Execute command when a wallet transaction changes (%s in cmd is replaced by "
"TxID)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Execute command when the best block changes (%s in cmd is replaced by block "
"hash)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Number of seconds to keep misbehaving peers from reconnecting (default: "
"86400)"),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Unable to bind to %s on this computer. Lambocoin is probably already running."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: -paytxfee is set very high. This is the transaction fee you will "
"pay if you send a transaction."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"Warning: Please check that your computer's date and time are correct.  If "
"your clock is wrong Lambocoin will not work properly."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"You must set rpcpassword=<password> in the configuration file:\n"
"%s\n"
"If the file does not exist, create it with owner-readable-only file "
"permissions."),
QT_TRANSLATE_NOOP("bitcoin-core", ""
"\n"
"SSL options: (see the Lambocoin Wiki for SSL setup instructions)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Accept connections from outside (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Add a node to connect to and attempt to keep the connection open"),
QT_TRANSLATE_NOOP("bitcoin-core", "Allow DNS lookups for -addnode, -seednode and -connect"),
QT_TRANSLATE_NOOP("bitcoin-core", "Allow JSON-RPC connections from specified IP address"),
QT_TRANSLATE_NOOP("bitcoin-core", "An error occurred while setting up the RPC port %i for listening: %s"),
QT_TRANSLATE_NOOP("bitcoin-core", "Bind to given address. Use [host]:port notation for IPv6"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot downgrade wallet"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot initialize keypool"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot resolve -bind address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot resolve -externalip address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Cannot write default address"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect only to the specified node"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect through socks proxy"),
QT_TRANSLATE_NOOP("bitcoin-core", "Connect to a node to retrieve peer addresses, and disconnect"),
QT_TRANSLATE_NOOP("bitcoin-core", "Detach block databases. Increases shutdown time (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Do not use proxy for connections to network <net> (IPv4 or IPv6)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Don't generate coins"),
QT_TRANSLATE_NOOP("bitcoin-core", "Done loading"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading blkindex.dat"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat: Wallet corrupted"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error loading wallet.dat: Wallet requires newer version of Lambocoin"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error"),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Transaction creation failed  "),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: Wallet locked, unable to create transaction  "),
QT_TRANSLATE_NOOP("bitcoin-core", "Error: could not start node"),
QT_TRANSLATE_NOOP("bitcoin-core", "Fee per KB to add to transactions you send"),
QT_TRANSLATE_NOOP("bitcoin-core", "Find peers using DNS lookup (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Generate coins"),
QT_TRANSLATE_NOOP("bitcoin-core", "Get help for a command"),
QT_TRANSLATE_NOOP("bitcoin-core", "How many blocks to check at startup (default: 2500, 0 = all)"),
QT_TRANSLATE_NOOP("bitcoin-core", "How thorough the block verification is (0-6, default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Info: Minting suspended due to locked wallet."),
QT_TRANSLATE_NOOP("bitcoin-core", "Insufficient funds"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid -proxy address: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -paytxfee=<amount>: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount for -reservebalance=<amount>"),
QT_TRANSLATE_NOOP("bitcoin-core", "Invalid amount"),
QT_TRANSLATE_NOOP("bitcoin-core", "List commands"),
QT_TRANSLATE_NOOP("bitcoin-core", "Listen for JSON-RPC connections on <port> (default: 8999)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Listen for connections on <port> (default: 8998 or testnet: 9000)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading addresses..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading block index..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading prime nodes..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading scrapes..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Loading wallet..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Maintain at most <n> connections to peers (default: 125)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Maximum per-connection receive buffer, <n>*1000 bytes (default: 10000)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Maximum per-connection send buffer, <n>*1000 bytes (default: 10000)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Not listening on any port"),
QT_TRANSLATE_NOOP("bitcoin-core", "Only connect to nodes in network <net> (IPv4 or IPv6)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Options:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Output extra debugging information. Implies all other -debug* options"),
QT_TRANSLATE_NOOP("bitcoin-core", "Output extra network debugging information"),
QT_TRANSLATE_NOOP("bitcoin-core", "Pass DNS requests to (SOCKS5) proxy"),
QT_TRANSLATE_NOOP("bitcoin-core", "Password for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", "Lambocoin version"),
QT_TRANSLATE_NOOP("bitcoin-core", "Lambocoin"),
QT_TRANSLATE_NOOP("bitcoin-core", "Prepend debug output with timestamp"),
QT_TRANSLATE_NOOP("bitcoin-core", "Rescan the block chain for missing wallet transactions"),
QT_TRANSLATE_NOOP("bitcoin-core", "Rescanning..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Run in the background as a daemon and accept commands"),
QT_TRANSLATE_NOOP("bitcoin-core", "Select the version of socks proxy to use (4 or 5, 5 is default)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send command to server or Lambocoind"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send commands to node running on <ip> (default: 127.0.0.1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send trace/debug info to console instead of debug.log file"),
QT_TRANSLATE_NOOP("bitcoin-core", "Send trace/debug info to debugger"),
QT_TRANSLATE_NOOP("bitcoin-core", "Sending..."),
QT_TRANSLATE_NOOP("bitcoin-core", "Server certificate file (default: server.cert)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Server private key (default: server.pem)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set database cache size in megabytes (default: 25)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set database disk log size in megabytes (default: 100)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Set key pool size to <n> (default: 100)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify configuration file (default: Lambocoin.conf)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify connection timeout (in milliseconds)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify data directory"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify pid file (default: Lambocoind.pid)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Specify your own public address"),
QT_TRANSLATE_NOOP("bitcoin-core", "Threshold for disconnecting misbehaving peers (default: 100)"),
QT_TRANSLATE_NOOP("bitcoin-core", "To use the %s option"),
QT_TRANSLATE_NOOP("bitcoin-core", "Try to discover public IP address (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to bind to %s on this computer (bind returned error %d, %s)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unable to sign checkpoint, wrong checkpointkey?"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown -socks proxy version requested: %i"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown network specified in -noproxy: '%s'"),
QT_TRANSLATE_NOOP("bitcoin-core", "Unknown network specified in -onlynet"),
QT_TRANSLATE_NOOP("bitcoin-core", "Upgrade wallet to latest format"),
QT_TRANSLATE_NOOP("bitcoin-core", "Usage:"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use OpenSSL (https) for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use Universal Plug and Play to map the listening port (default: 0)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use Universal Plug and Play to map the listening port (default: 1)"),
QT_TRANSLATE_NOOP("bitcoin-core", "Use the test network"),
QT_TRANSLATE_NOOP("bitcoin-core", "Username for JSON-RPC connections"),
QT_TRANSLATE_NOOP("bitcoin-core", "Wallet needed to be rewritten: restart Lambocoin to complete"),
QT_TRANSLATE_NOOP("bitcoin-core", "Warning: Disk space is low"),
};
