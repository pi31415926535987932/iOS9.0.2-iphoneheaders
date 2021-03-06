/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 6, 2015 at 2:33:28 PM Japan Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NetworkStatistics.framework/NetworkStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkStatistics/NetworkStatistics-Structs.h>
#import <NetworkStatistics/NWStatisticsSource.h>

@class NSString;

@interface NWStatisticsInterfaceSource : NWStatisticsSource {

	nstat_ifnet_descriptor _descriptor;
	NSString* _interfaceName;
	NSString* _interfaceDescription;
	unsigned _linkQualityMetric;
	unsigned _ulMaxBandwidth;
	unsigned _ulEffectiveBandwidth;
	unsigned _ulBytesLost;
	unsigned _ulMinLatency;
	unsigned _ulEffectiveLatency;
	unsigned _ulMaxLatency;
	unsigned _ulReTxtLevel;
	unsigned _dlMaxBandwidth;
	unsigned _dlEffectiveBandwidth;
	unsigned _cellUlMinQueueSize;
	unsigned _cellUlAvgQueueSize;
	unsigned _cellUlMaxQueueSize;
	unsigned _cellConfigInactivityTime;
	unsigned _cellConfigBackoffTime;
	unsigned _wifiUlErrorRate;
	unsigned _wifiDlMinLatency;
	unsigned _wifiDlEffectiveLatency;
	unsigned _wifiDlMaxLatency;
	unsigned _wifiDlErrorRate;
	unsigned _wifiConfigFrequency;
	unsigned _wifiConfigMulticastRate;
	unsigned _wifiScanCount;
	unsigned _wifiScanDuration;

}

@property (retain) NSString * interfaceName;                       //@synthesize interfaceName=_interfaceName - In the implementation block
@property (retain) NSString * interfaceDescription;                //@synthesize interfaceDescription=_interfaceDescription - In the implementation block
@property (readonly) int interfaceType; 
@property (readonly) int interface; 
@property (readonly) int threshold; 
@property (assign) unsigned linkQualityMetric;                     //@synthesize linkQualityMetric=_linkQualityMetric - In the implementation block
@property (assign) unsigned ulMaxBandwidth;                        //@synthesize ulMaxBandwidth=_ulMaxBandwidth - In the implementation block
@property (assign) unsigned ulEffectiveBandwidth;                  //@synthesize ulEffectiveBandwidth=_ulEffectiveBandwidth - In the implementation block
@property (assign) unsigned ulBytesLost;                           //@synthesize ulBytesLost=_ulBytesLost - In the implementation block
@property (assign) unsigned ulMinLatency;                          //@synthesize ulMinLatency=_ulMinLatency - In the implementation block
@property (assign) unsigned ulEffectiveLatency;                    //@synthesize ulEffectiveLatency=_ulEffectiveLatency - In the implementation block
@property (assign) unsigned ulMaxLatency;                          //@synthesize ulMaxLatency=_ulMaxLatency - In the implementation block
@property (assign) unsigned ulReTxtLevel;                          //@synthesize ulReTxtLevel=_ulReTxtLevel - In the implementation block
@property (assign) unsigned dlMaxBandwidth;                        //@synthesize dlMaxBandwidth=_dlMaxBandwidth - In the implementation block
@property (assign) unsigned dlEffectiveBandwidth;                  //@synthesize dlEffectiveBandwidth=_dlEffectiveBandwidth - In the implementation block
@property (assign) unsigned cellUlMinQueueSize;                    //@synthesize cellUlMinQueueSize=_cellUlMinQueueSize - In the implementation block
@property (assign) unsigned cellUlAvgQueueSize;                    //@synthesize cellUlAvgQueueSize=_cellUlAvgQueueSize - In the implementation block
@property (assign) unsigned cellUlMaxQueueSize;                    //@synthesize cellUlMaxQueueSize=_cellUlMaxQueueSize - In the implementation block
@property (assign) unsigned cellConfigInactivityTime;              //@synthesize cellConfigInactivityTime=_cellConfigInactivityTime - In the implementation block
@property (assign) unsigned cellConfigBackoffTime;                 //@synthesize cellConfigBackoffTime=_cellConfigBackoffTime - In the implementation block
@property (assign) unsigned wifiUlErrorRate;                       //@synthesize wifiUlErrorRate=_wifiUlErrorRate - In the implementation block
@property (assign) unsigned wifiDlMinLatency;                      //@synthesize wifiDlMinLatency=_wifiDlMinLatency - In the implementation block
@property (assign) unsigned wifiDlEffectiveLatency;                //@synthesize wifiDlEffectiveLatency=_wifiDlEffectiveLatency - In the implementation block
@property (assign) unsigned wifiDlMaxLatency;                      //@synthesize wifiDlMaxLatency=_wifiDlMaxLatency - In the implementation block
@property (assign) unsigned wifiDlErrorRate;                       //@synthesize wifiDlErrorRate=_wifiDlErrorRate - In the implementation block
@property (assign) unsigned wifiConfigFrequency;                   //@synthesize wifiConfigFrequency=_wifiConfigFrequency - In the implementation block
@property (assign) unsigned wifiConfigMulticastRate;               //@synthesize wifiConfigMulticastRate=_wifiConfigMulticastRate - In the implementation block
@property (assign) unsigned wifiScanCount;                         //@synthesize wifiScanCount=_wifiScanCount - In the implementation block
@property (assign) unsigned wifiScanDuration;                      //@synthesize wifiScanDuration=_wifiScanDuration - In the implementation block
-(id)description;
-(int)interface;
-(id)initWithManager:(id)arg1 interface:(int)arg2 threshold:(int)arg3 ;
-(void)setLinkQualityMetric:(unsigned)arg1 ;
-(void)setUlMaxBandwidth:(unsigned)arg1 ;
-(void)setUlEffectiveBandwidth:(unsigned)arg1 ;
-(void)setUlBytesLost:(unsigned)arg1 ;
-(void)setUlMinLatency:(unsigned)arg1 ;
-(void)setUlEffectiveLatency:(unsigned)arg1 ;
-(void)setUlMaxLatency:(unsigned)arg1 ;
-(void)setDlMaxBandwidth:(unsigned)arg1 ;
-(void)setDlEffectiveBandwidth:(unsigned)arg1 ;
-(void)setCellUlMinQueueSize:(unsigned)arg1 ;
-(void)setCellUlAvgQueueSize:(unsigned)arg1 ;
-(void)setCellUlMaxQueueSize:(unsigned)arg1 ;
-(void)setCellConfigInactivityTime:(unsigned)arg1 ;
-(void)setCellConfigBackoffTime:(unsigned)arg1 ;
-(void)setWifiUlErrorRate:(unsigned)arg1 ;
-(void)setWifiDlMinLatency:(unsigned)arg1 ;
-(void)setWifiDlEffectiveLatency:(unsigned)arg1 ;
-(void)setWifiDlMaxLatency:(unsigned)arg1 ;
-(void)setWifiDlErrorRate:(unsigned)arg1 ;
-(void)setWifiConfigFrequency:(unsigned)arg1 ;
-(void)setWifiConfigMulticastRate:(unsigned)arg1 ;
-(void)setWifiScanCount:(unsigned)arg1 ;
-(void)_invalidateCommonCounts;
-(void)_invalidateCellCounts;
-(void)_invalidateWifiCounts;
-(NSString *)interfaceDescription;
-(unsigned)linkQualityMetric;
-(unsigned)ulMaxBandwidth;
-(unsigned)ulEffectiveBandwidth;
-(unsigned)ulBytesLost;
-(unsigned)ulMinLatency;
-(unsigned)ulEffectiveLatency;
-(unsigned)ulMaxLatency;
-(unsigned)ulReTxtLevel;
-(unsigned)dlMaxBandwidth;
-(unsigned)dlEffectiveBandwidth;
-(unsigned)cellUlMinQueueSize;
-(unsigned)cellUlAvgQueueSize;
-(unsigned)cellUlMaxQueueSize;
-(unsigned)cellConfigInactivityTime;
-(unsigned)cellConfigBackoffTime;
-(unsigned)wifiDlMinLatency;
-(unsigned)wifiDlEffectiveLatency;
-(unsigned)wifiDlMaxLatency;
-(unsigned)wifiDlErrorRate;
-(unsigned)wifiUlErrorRate;
-(unsigned)wifiConfigFrequency;
-(unsigned)wifiConfigMulticastRate;
-(unsigned)wifiScanCount;
-(void)setUlReTxtLevel:(unsigned)arg1 ;
-(void)setInterfaceDescription:(NSString *)arg1 ;
-(void)_invalidateAllExtraCounts;
-(void)_handleCellExtra:(nstat_ifnet_desc_cellular_status*)arg1 ;
-(void)_handleWifiExtra:(nstat_ifnet_desc_wifi_status*)arg1 ;
-(id)createCounts;
-(char)handleDescriptor:(void*)arg1 length:(unsigned long)arg2 ;
-(int)threshold;
-(int)interfaceType;
-(void)setInterfaceName:(NSString *)arg1 ;
-(NSString *)interfaceName;
-(void)setWifiScanDuration:(unsigned)arg1 ;
-(unsigned)wifiScanDuration;
@end

