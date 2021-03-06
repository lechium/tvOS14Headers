/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:37 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCListener;

@interface DEDConfiguration : NSObject {

	NSXPCListener* _anonymousListener;

}

@property (retain) NSXPCListener * anonymousListener;              //@synthesize anonymousListener=_anonymousListener - In the implementation block
+(id)sharedInstance;
-(id)identifier;
-(NSXPCListener *)anonymousListener;
-(id)errorDomain;
-(unsigned long long)connectionType;
-(id)machServiceName;
-(const char*)loggingSubsystem;
-(id)dedDirectory;
-(void)setAnonymousListener:(NSXPCListener *)arg1 ;
-(id)classClusterAPIVersion;
-(id)sharedAnonymousListener;
-(void)invalidateTestListeners;
@end

