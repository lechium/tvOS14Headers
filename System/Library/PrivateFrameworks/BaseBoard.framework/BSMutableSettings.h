/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <BaseBoard/BSSettings.h>

@interface BSMutableSettings : BSSettings
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFlag:(long long)arg1 forSetting:(unsigned long long)arg2 ;
-(void)setObject:(id)arg1 forSetting:(unsigned long long)arg2 ;
-(void)applySettings:(id)arg1 ;
-(void)removeAllSettings;
@end
