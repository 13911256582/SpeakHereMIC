//
//  Receiver.h
//  SpeakHere
//
//  Created by ShaoLing on 5/24/14.
//
//

#import <Foundation/Foundation.h>

@interface Receiver : NSObject <NSStreamDelegate>

- (void)didStartNetworkOperation;
- (void)didStopNetworkOperation;
- (BOOL)isStarted;
- (BOOL)isReceiving;
- (void)startServer;
- (void)stopServer:(NSString *)reason;
- (void)cancel;

@property (nonatomic, assign, readonly ) BOOL               isStarted;
@property (nonatomic, assign, readonly ) BOOL               isReceiving;
@property (nonatomic, strong, readwrite) NSNetService *     netService;
@property (nonatomic, assign, readwrite) CFSocketRef        listeningSocket;
@property (nonatomic, strong, readwrite) NSInputStream *    networkStream;
@property (nonatomic, strong, readwrite) NSOutputStream *   fileStream;
@property (nonatomic, copy,   readwrite) NSString *         filePath;

// forward declarations

- (void)stopServer:(NSString *)reason;

@end
