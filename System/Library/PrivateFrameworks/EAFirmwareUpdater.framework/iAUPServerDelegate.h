/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/EAFirmwareUpdater.framework/EAFirmwareUpdater
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol iAUPServerDelegate
@required
-(id)writeData:(id)arg1;
-(void)updateProgress:(double)arg1;
-(void)logStatusString:(id)arg1;
-(void)firmwareUpdateComplete:(id)arg1 error:(id)arg2;
-(void)handleFirmwareUpdateStatus:(id)arg1;
-(unsigned)getWhitelistedPersonalizationFields;
-(void)processPersonalizationInfoFromAccessory:(id)arg1;
-(unsigned char)getPersonalizationID;
-(BOOL)updateRequiresPersonalization;
-(void)handleSessionError:(unsigned)arg1 message:(id)arg2;
-(id)getDeviceClassName;

@end

