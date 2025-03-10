#ifndef CFG_SCHEMA_H
#define CFG_SCHEMA_H

#ifdef __cplusplus
namespace swss {
#endif

#define CFG_AAA_TABLE_NAME "AAA"
#define CFG_ACL_RULE_TABLE_NAME "ACL_RULE"
#define CFG_ACL_TABLE_TABLE_NAME "ACL_TABLE"
#define CFG_ACL_TABLE_TYPE_TABLE_NAME "ACL_TABLE_TYPE"
#define CFG_ASIC_SENSORS_TABLE_NAME "ASIC_SENSORS"
#define CFG_AS_PATH_SET_TABLE_NAME "AS_PATH_SET"
#define CFG_AUTO_TECHSUPPORT_TABLE_NAME "AUTO_TECHSUPPORT"
#define CFG_AUTO_TECHSUPPORT_FEATURE_TABLE_NAME "AUTO_TECHSUPPORT_FEATURE"
#define CFG_BANNER_MESSAGE_TABLE_NAME "BANNER_MESSAGE"
#define CFG_BGP_ALLOWED_PREFIXES_TABLE_NAME "BGP_ALLOWED_PREFIXES"
#define CFG_BGP_BBR_TABLE_NAME "BGP_BBR"
#define CFG_BGP_DEVICE_GLOBAL_TABLE_NAME "BGP_DEVICE_GLOBAL"
#define CFG_BGP_GLOBALS_TABLE_NAME "BGP_GLOBALS"
#define CFG_BGP_GLOBALS_AF_TABLE_NAME "BGP_GLOBALS_AF"
#define CFG_BGP_GLOBALS_AF_AGGREGATE_ADDR_TABLE_NAME "BGP_GLOBALS_AF_AGGREGATE_ADDR"
#define CFG_BGP_GLOBALS_AF_NETWORK_TABLE_NAME "BGP_GLOBALS_AF_NETWORK"
#define CFG_BGP_GLOBALS_LISTEN_PREFIX_TABLE_NAME "BGP_GLOBALS_LISTEN_PREFIX"
#define CFG_BGP_INTERNAL_NEIGHBOR_TABLE_NAME "BGP_INTERNAL_NEIGHBOR"
#define CFG_BGP_MONITORS_TABLE_NAME "BGP_MONITORS"
#define CFG_BGP_NEIGHBOR_TABLE_NAME "BGP_NEIGHBOR"
#define CFG_BGP_NEIGHBOR_AF_TABLE_NAME "BGP_NEIGHBOR_AF"
#define CFG_BGP_PEER_GROUP_TABLE_NAME "BGP_PEER_GROUP"
#define CFG_BGP_PEER_GROUP_AF_TABLE_NAME "BGP_PEER_GROUP_AF"
#define CFG_BGP_PEER_RANGE_TABLE_NAME "BGP_PEER_RANGE"
#define CFG_BGP_SENTINELS_TABLE_NAME "BGP_SENTINELS"
#define CFG_BGP_VOQ_CHASSIS_NEIGHBOR_TABLE_NAME "BGP_VOQ_CHASSIS_NEIGHBOR"
#define CFG_BMP_TABLE_NAME "BMP"
#define CFG_BREAKOUT_CFG_TABLE_NAME "BREAKOUT_CFG"
#define CFG_BUFFER_PG_TABLE_NAME "BUFFER_PG"
#define CFG_BUFFER_POOL_TABLE_NAME "BUFFER_POOL"
#define CFG_BUFFER_PORT_EGRESS_PROFILE_LIST_TABLE_NAME "BUFFER_PORT_EGRESS_PROFILE_LIST"
#define CFG_BUFFER_PORT_INGRESS_PROFILE_LIST_TABLE_NAME "BUFFER_PORT_INGRESS_PROFILE_LIST"
#define CFG_BUFFER_PROFILE_TABLE_NAME "BUFFER_PROFILE"
#define CFG_BUFFER_QUEUE_TABLE_NAME "BUFFER_QUEUE"
#define CFG_CABLE_LENGTH_TABLE_NAME "CABLE_LENGTH"
#define CFG_CHASSIS_MODULE_TABLE_NAME "CHASSIS_MODULE"
#define CFG_COMMUNITY_SET_TABLE_NAME "COMMUNITY_SET"
#define CFG_CONSOLE_PORT_TABLE_NAME "CONSOLE_PORT"
#define CFG_CONSOLE_SWITCH_TABLE_NAME "CONSOLE_SWITCH"
#define CFG_COPP_GROUP_TABLE_NAME "COPP_GROUP"
#define CFG_COPP_TRAP_TABLE_NAME "COPP_TRAP"
#define CFG_CRM_TABLE_NAME "CRM"
#define CFG_DASH_ACL_GROUP_TABLE_NAME "DASH_ACL_GROUP"
#define CFG_DASH_ACL_IN_TABLE_NAME "DASH_ACL_IN"
#define CFG_DASH_ACL_OUT_TABLE_NAME "DASH_ACL_OUT"
#define CFG_DASH_ACL_RULE_TABLE_NAME "DASH_ACL_RULE"
#define CFG_DASH_APPLIANCE_TABLE_NAME "DASH_APPLIANCE"
#define CFG_DASH_ENI_TABLE_NAME "DASH_ENI"
#define CFG_DASH_QOS_TABLE_NAME "DASH_QOS"
#define CFG_DASH_ROUTE_TABLE_TABLE_NAME "DASH_ROUTE_TABLE"
#define CFG_DASH_ROUTING_TYPE_TABLE_NAME "DASH_ROUTING_TYPE"
#define CFG_DASH_VNET_TABLE_NAME "DASH_VNET"
#define CFG_DASH_VNET_MAPPING_TABLE_TABLE_NAME "DASH_VNET_MAPPING_TABLE"
#define CFG_DEFAULT_LOSSLESS_BUFFER_PARAMETER_TABLE_NAME "DEFAULT_LOSSLESS_BUFFER_PARAMETER"
#define CFG_DEVICE_METADATA_TABLE_NAME "DEVICE_METADATA"
#define CFG_DEVICE_NEIGHBOR_TABLE_NAME "DEVICE_NEIGHBOR"
#define CFG_DEVICE_NEIGHBOR_METADATA_TABLE_NAME "DEVICE_NEIGHBOR_METADATA"
#define CFG_DHCP_RELAY_TABLE_NAME "DHCP_RELAY"
#define CFG_DHCP_SERVER_TABLE_NAME "DHCP_SERVER"
#define CFG_DHCP_SERVER_IPV4_TABLE_NAME "DHCP_SERVER_IPV4"
#define CFG_DHCP_SERVER_IPV4_CUSTOMIZED_OPTIONS_TABLE_NAME "DHCP_SERVER_IPV4_CUSTOMIZED_OPTIONS"
#define CFG_DHCP_SERVER_IPV4_PORT_TABLE_NAME "DHCP_SERVER_IPV4_PORT"
#define CFG_DHCP_SERVER_IPV4_RANGE_TABLE_NAME "DHCP_SERVER_IPV4_RANGE"
#define CFG_DNS_NAMESERVER_TABLE_NAME "DNS_NAMESERVER"
#define CFG_DOT1P_TO_TC_MAP_TABLE_NAME "DOT1P_TO_TC_MAP"
#define CFG_DPUS_TABLE_NAME "DPUS"
#define CFG_DPU_PORT_TABLE_NAME "DPU_PORT"
#define CFG_DSCP_TO_FC_MAP_TABLE_NAME "DSCP_TO_FC_MAP"
#define CFG_DSCP_TO_TC_MAP_TABLE_NAME "DSCP_TO_TC_MAP"
#define CFG_EXP_TO_FC_MAP_TABLE_NAME "EXP_TO_FC_MAP"
#define CFG_EXTENDED_COMMUNITY_SET_TABLE_NAME "EXTENDED_COMMUNITY_SET"
#define CFG_FABRIC_MONITOR_TABLE_NAME "FABRIC_MONITOR"
#define CFG_FABRIC_PORT_TABLE_NAME "FABRIC_PORT"
#define CFG_FEATURE_TABLE_NAME "FEATURE"
#define CFG_FG_NHG_TABLE_NAME "FG_NHG"
#define CFG_FG_NHG_MEMBER_TABLE_NAME "FG_NHG_MEMBER"
#define CFG_FG_NHG_PREFIX_TABLE_NAME "FG_NHG_PREFIX"
#define CFG_FIPS_TABLE_NAME "FIPS"
#define CFG_FLEX_COUNTER_TABLE_TABLE_NAME "FLEX_COUNTER_TABLE"
#define CFG_FLOW_COUNTER_ROUTE_PATTERN_TABLE_NAME "FLOW_COUNTER_ROUTE_PATTERN"
#define CFG_GNMI_TABLE_NAME "GNMI"
#define CFG_GNMI_CLIENT_CERT_TABLE_NAME "GNMI_CLIENT_CERT"
#define CFG_GRPCCLIENT_TABLE_NAME "GRPCCLIENT"
#define CFG_INTERFACE_TABLE_NAME "INTERFACE"
#define CFG_KDUMP_TABLE_NAME "KDUMP"
#define CFG_KUBERNETES_MASTER_TABLE_NAME "KUBERNETES_MASTER"
#define CFG_LDAP_TABLE_NAME "LDAP"
#define CFG_LDAP_SERVER_TABLE_NAME "LDAP_SERVER"
#define CFG_LLDP_TABLE_NAME "LLDP"
#define CFG_LLDP_PORT_TABLE_NAME "LLDP_PORT"
#define CFG_LOGGER_TABLE_NAME "LOGGER"
#define CFG_LOOPBACK_INTERFACE_TABLE_NAME "LOOPBACK_INTERFACE"
#define CFG_LOSSLESS_TRAFFIC_PATTERN_TABLE_NAME "LOSSLESS_TRAFFIC_PATTERN"
#define CFG_MACSEC_PROFILE_TABLE_NAME "MACSEC_PROFILE"
#define CFG_MAP_PFC_PRIORITY_TO_QUEUE_TABLE_NAME "MAP_PFC_PRIORITY_TO_QUEUE"
#define CFG_MCLAG_DOMAIN_TABLE_NAME "MCLAG_DOMAIN"
#define CFG_MCLAG_INTERFACE_TABLE_NAME "MCLAG_INTERFACE"
#define CFG_MCLAG_UNIQUE_IP_TABLE_NAME "MCLAG_UNIQUE_IP"
#define CFG_MEMORY_STATISTICS_TABLE_NAME "MEMORY_STATISTICS"
#define CFG_MGMT_INTERFACE_TABLE_NAME "MGMT_INTERFACE"
#define CFG_MGMT_PORT_TABLE_NAME "MGMT_PORT"
#define CFG_MGMT_VRF_CONFIG_TABLE_NAME "MGMT_VRF_CONFIG"
#define CFG_MID_PLANE_BRIDGE_TABLE_NAME "MID_PLANE_BRIDGE"
#define CFG_MIRROR_SESSION_TABLE_NAME "MIRROR_SESSION"
#define CFG_MPLS_TC_TO_TC_MAP_TABLE_NAME "MPLS_TC_TO_TC_MAP"
#define CFG_MUX_CABLE_TABLE_NAME "MUX_CABLE"
#define CFG_MUX_LINKMGR_TABLE_NAME "MUX_LINKMGR"
#define CFG_NAT_BINDINGS_TABLE_NAME "NAT_BINDINGS"
#define CFG_NAT_GLOBAL_TABLE_NAME "NAT_GLOBAL"
#define CFG_NAT_POOL_TABLE_NAME "NAT_POOL"
#define CFG_NEIGH_TABLE_NAME "NEIGH"
#define CFG_NTP_TABLE_NAME "NTP"
#define CFG_NTP_KEY_TABLE_NAME "NTP_KEY"
#define CFG_NTP_SERVER_TABLE_NAME "NTP_SERVER"
#define CFG_NVGRE_TUNNEL_TABLE_NAME "NVGRE_TUNNEL"
#define CFG_NVGRE_TUNNEL_MAP_TABLE_NAME "NVGRE_TUNNEL_MAP"
#define CFG_PASSW_HARDENING_TABLE_NAME "PASSW_HARDENING"
#define CFG_PBH_HASH_TABLE_NAME "PBH_HASH"
#define CFG_PBH_HASH_FIELD_TABLE_NAME "PBH_HASH_FIELD"
#define CFG_PBH_RULE_TABLE_NAME "PBH_RULE"
#define CFG_PBH_TABLE_TABLE_NAME "PBH_TABLE"
#define CFG_PEER_SWITCH_TABLE_NAME "PEER_SWITCH"
#define CFG_PFC_PRIORITY_TO_PRIORITY_GROUP_MAP_TABLE_NAME "PFC_PRIORITY_TO_PRIORITY_GROUP_MAP"
#define CFG_PFC_WD_TABLE_NAME "PFC_WD"
#define CFG_POLICER_TABLE_NAME "POLICER"
#define CFG_PORT_TABLE_NAME "PORT"
#define CFG_PORTCHANNEL_TABLE_NAME "PORTCHANNEL"
#define CFG_PORTCHANNEL_INTERFACE_TABLE_NAME "PORTCHANNEL_INTERFACE"
#define CFG_PORTCHANNEL_MEMBER_TABLE_NAME "PORTCHANNEL_MEMBER"
#define CFG_PORT_QOS_MAP_TABLE_NAME "PORT_QOS_MAP"
#define CFG_PORT_STORM_CONTROL_TABLE_NAME "PORT_STORM_CONTROL"
#define CFG_PREFIX_TABLE_NAME "PREFIX"
#define CFG_PREFIX_LIST_TABLE_NAME "PREFIX_LIST"
#define CFG_PREFIX_SET_TABLE_NAME "PREFIX_SET"
#define CFG_QUEUE_TABLE_NAME "QUEUE"
#define CFG_RADIUS_TABLE_NAME "RADIUS"
#define CFG_RADIUS_SERVER_TABLE_NAME "RADIUS_SERVER"
#define CFG_RESTAPI_TABLE_NAME "RESTAPI"
#define CFG_ROUTE_MAP_TABLE_NAME "ROUTE_MAP"
#define CFG_ROUTE_MAP_SET_TABLE_NAME "ROUTE_MAP_SET"
#define CFG_ROUTE_REDISTRIBUTE_TABLE_NAME "ROUTE_REDISTRIBUTE"
#define CFG_SCHEDULER_TABLE_NAME "SCHEDULER"
#define CFG_SERIAL_CONSOLE_TABLE_NAME "SERIAL_CONSOLE"
#define CFG_SFLOW_TABLE_NAME "SFLOW"
#define CFG_SFLOW_COLLECTOR_TABLE_NAME "SFLOW_COLLECTOR"
#define CFG_SFLOW_SESSION_TABLE_NAME "SFLOW_SESSION"
#define CFG_SNMP_TABLE_NAME "SNMP"
#define CFG_SNMP_AGENT_ADDRESS_CONFIG_TABLE_NAME "SNMP_AGENT_ADDRESS_CONFIG"
#define CFG_SNMP_COMMUNITY_TABLE_NAME "SNMP_COMMUNITY"
#define CFG_SNMP_USER_TABLE_NAME "SNMP_USER"
#define CFG_SRV6_MY_LOCATORS_TABLE_NAME "SRV6_MY_LOCATORS"
#define CFG_SRV6_MY_SIDS_TABLE_NAME "SRV6_MY_SIDS"
#define CFG_SSH_SERVER_TABLE_NAME "SSH_SERVER"
#define CFG_STATIC_NAPT_TABLE_NAME "STATIC_NAPT"
#define CFG_STATIC_NAT_TABLE_NAME "STATIC_NAT"
#define CFG_STATIC_ROUTE_TABLE_NAME "STATIC_ROUTE"
#define CFG_SUBNET_DECAP_TABLE_NAME "SUBNET_DECAP"
#define CFG_SUPPRESS_ASIC_SDK_HEALTH_EVENT_TABLE_NAME "SUPPRESS_ASIC_SDK_HEALTH_EVENT"
#define CFG_SWITCH_HASH_TABLE_NAME "SWITCH_HASH"
#define CFG_SYSLOG_CONFIG_TABLE_NAME "SYSLOG_CONFIG"
#define CFG_SYSLOG_CONFIG_FEATURE_TABLE_NAME "SYSLOG_CONFIG_FEATURE"
#define CFG_SYSLOG_SERVER_TABLE_NAME "SYSLOG_SERVER"
#define CFG_SYSTEM_DEFAULTS_TABLE_NAME "SYSTEM_DEFAULTS"
#define CFG_SYSTEM_PORT_TABLE_NAME "SYSTEM_PORT"
#define CFG_TACPLUS_TABLE_NAME "TACPLUS"
#define CFG_TACPLUS_SERVER_TABLE_NAME "TACPLUS_SERVER"
#define CFG_TC_TO_DSCP_MAP_TABLE_NAME "TC_TO_DSCP_MAP"
#define CFG_TC_TO_PRIORITY_GROUP_MAP_TABLE_NAME "TC_TO_PRIORITY_GROUP_MAP"
#define CFG_TC_TO_QUEUE_MAP_TABLE_NAME "TC_TO_QUEUE_MAP"
#define CFG_TELEMETRY_TABLE_NAME "TELEMETRY"
#define CFG_TELEMETRY_CLIENT_TABLE_NAME "TELEMETRY_CLIENT"
#define CFG_TUNNEL_TABLE_NAME "TUNNEL"
#define CFG_VERSIONS_TABLE_NAME "VERSIONS"
#define CFG_VLAN_TABLE_NAME "VLAN"
#define CFG_VLAN_INTERFACE_TABLE_NAME "VLAN_INTERFACE"
#define CFG_VLAN_MEMBER_TABLE_NAME "VLAN_MEMBER"
#define CFG_VLAN_SUB_INTERFACE_TABLE_NAME "VLAN_SUB_INTERFACE"
#define CFG_VNET_TABLE_NAME "VNET"
#define CFG_VOQ_INBAND_INTERFACE_TABLE_NAME "VOQ_INBAND_INTERFACE"
#define CFG_VRF_TABLE_NAME "VRF"
#define CFG_VXLAN_EVPN_NVO_TABLE_NAME "VXLAN_EVPN_NVO"
#define CFG_VXLAN_TUNNEL_TABLE_NAME "VXLAN_TUNNEL"
#define CFG_VXLAN_TUNNEL_MAP_TABLE_NAME "VXLAN_TUNNEL_MAP"
#define CFG_WARM_RESTART_TABLE_NAME "WARM_RESTART"
#define CFG_WRED_PROFILE_TABLE_NAME "WRED_PROFILE"
#define CFG_XCVRD_LOG_TABLE_NAME "XCVRD_LOG"
// #define CFG_alpm-parity-error_TABLE_NAME "alpm-parity-error"
// #define CFG_asic-sdk-health-event_TABLE_NAME "asic-sdk-health-event"
// #define CFG_bgp-state_TABLE_NAME "bgp-state"
#define CFG_chk_crm_threshold_TABLE_NAME "chk_crm_threshold"
// #define CFG_cpu-usage_TABLE_NAME "cpu-usage"
// #define CFG_dhcp-relay-bind-failure_TABLE_NAME "dhcp-relay-bind-failure"
// #define CFG_dhcp-relay-discard_TABLE_NAME "dhcp-relay-discard"
// #define CFG_dhcp-relay-disparity_TABLE_NAME "dhcp-relay-disparity"
// #define CFG_disk-usage_TABLE_NAME "disk-usage"
// #define CFG_event-disk_TABLE_NAME "event-disk"
// #define CFG_event-down-ctr_TABLE_NAME "event-down-ctr"
// #define CFG_event-kernel_TABLE_NAME "event-kernel"
// #define CFG_event-seu_TABLE_NAME "event-seu"
// #define CFG_event-sshd_TABLE_NAME "event-sshd"
// #define CFG_event-stopped-ctr_TABLE_NAME "event-stopped-ctr"
// #define CFG_if-state_TABLE_NAME "if-state"
// #define CFG_invalid-freelist_TABLE_NAME "invalid-freelist"
// #define CFG_mem-threshold-exceeded_TABLE_NAME "mem-threshold-exceeded"
// #define CFG_memory-usage_TABLE_NAME "memory-usage"
#define CFG_notification_TABLE_NAME "notification"
// #define CFG_pfc-storm_TABLE_NAME "pfc-storm"
// #define CFG_process-exited-unexpectedly_TABLE_NAME "process-exited-unexpectedly"
// #define CFG_process-not-running_TABLE_NAME "process-not-running"
// #define CFG_select-operation-failure_TABLE_NAME "select-operation-failure"
// #define CFG_syncd-failure_TABLE_NAME "syncd-failure"
// #define CFG_watchdog-timeout_TABLE_NAME "watchdog-timeout"
// #define CFG_zebra-no-buff_TABLE_NAME "zebra-no-buff"

#ifdef __cplusplus
}
#endif
#endif