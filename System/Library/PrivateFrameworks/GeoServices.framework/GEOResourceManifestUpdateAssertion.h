/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface GEOResourceManifestUpdateAssertion : NSObject {

	NSString* _reason;
	double _creationTimestamp;
	NSObject*<OS_xpc_object> _connection;
	int _notifyToken;

}
-(id)debugDescription;
-(id)init;
-(void)dealloc;
-(id)initWithReason:(id)arg1 ;
-(void)_connectToGeod;
@end

