/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CWFXPCRequestProtocolPublicWiFi
@required
-(void)startMonitoringEvent:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringEvent:(id)arg1 requestParams:(id)arg2 reply:(/*^block*/id)arg3;
-(void)stopMonitoringAllEventsWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySSIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)querySSIDForVendorWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;
-(void)queryBSSIDForVendorWithRequestParams:(id)arg1 reply:(/*^block*/id)arg2;

@end
