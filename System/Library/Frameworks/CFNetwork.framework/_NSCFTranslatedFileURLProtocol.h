/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:17 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLProtocol.h>

@interface _NSCFTranslatedFileURLProtocol : NSURLProtocol {

	const CFURLProtocolInstanceCallbacks* _callbacks;
	CFURLProtocolClient* _cfurlClient;
	const void* _info;

}
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
+(const CFURLProtocolImplementation*)pimpl;
-(void)dealloc;
-(void)stopLoading;
-(id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3 ;
-(void)startLoading;
@end

