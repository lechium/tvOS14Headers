/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GCDeviceConfigurationRegistry <NSObject>
@required
-(BOOL)updateConfiguration:(id)arg1;
-(BOOL)removeConfigurationWithIdentifier:(id)arg1;
-(BOOL)hasConfigurationWithIdentifier:(id)arg1;
-(id)configurationWithIdentifier:(id)arg1;
-(BOOL)addConfiguration:(id)arg1 replaceExisting:(BOOL)arg2;
-(void)refreshActiveConfigurationsWithCompletion:(/*^block*/id)arg1;
-(void)refreshActiveConfigurations;

@end

