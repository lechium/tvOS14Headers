/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriVOX.framework/SiriVOX
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SVXClientAudioPowerServicing <NSObject>
@property (assign,nonatomic,__weak) id<SVXClientAudioPowerServiceDelegate> delegate; 
@required
-(id<SVXClientAudioPowerServiceDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)endUpdate;
-(void)beginUpdateWithFrequency:(long long)arg1;

@end
