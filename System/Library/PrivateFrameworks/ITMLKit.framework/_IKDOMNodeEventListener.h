/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class JSManagedValue;

@interface _IKDOMNodeEventListener : NSObject {

	BOOL _enabled;
	JSManagedValue* _managedValue;

}

@property (nonatomic,retain) JSManagedValue * managedValue;              //@synthesize managedValue=_managedValue - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(id)value;
-(BOOL)isEnabled;
-(JSManagedValue *)managedValue;
-(id)initWithListener:(id)arg1 forNode:(id)arg2 ;
-(void)setManagedValue:(JSManagedValue *)arg1 ;
@end

