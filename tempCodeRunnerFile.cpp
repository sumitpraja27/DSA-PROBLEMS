## GitHub Copilot Chat

- Extension Version: 0.28.5 (prod)
- VS Code: vscode/1.101.0
- OS: Windows

## Network

User Settings:
```json
  "github.copilot.advanced.debug.useElectronFetcher": true,
  "github.copilot.advanced.debug.useNodeFetcher": false,
  "github.copilot.advanced.debug.useNodeFetchFetcher": true
```

Connecting to https://api.github.com:
- DNS ipv4 Lookup: 20.207.73.85 (45 ms)
- DNS ipv6 Lookup: Error (43 ms): getaddrinfo ENOTFOUND api.github.com
- Proxy URL: None (1 ms)
- Electron fetch (configured): HTTP 200 (206 ms)
- Node.js https: HTTP 200 (257 ms)
- Node.js fetch: HTTP 200 (272 ms)
- Helix fetch: HTTP 200 (305 ms)

Connecting to https://api.individual.githubcopilot.com/_ping:
- DNS ipv4 Lookup: 140.82.112.22 (66 ms)
- DNS ipv6 Lookup: Error (68 ms): getaddrinfo ENOTFOUND api.individual.githubcopilot.com
- Proxy URL: None (15 ms)
- Electron fetch (configured): HTTP 200 (1017 ms)
- Node.js https: HTTP 200 (1076 ms)
- Node.js fetch: HTTP 200 (919 ms)
- Helix fetch: HTTP 200 (1113 ms)

## Documentation

In corporate networks: [Troubleshooting firewall settings for GitHub Copilot](https://docs.github.com/en/copilot/troubleshooting-github-copilot/troubleshooting-firewall-settings-for-github-copilot).