/**
 * @file injector_interface.ixx
 * @brief The interface of a Dll injector.
 *
 * @author Chen Zhenshuo (chenzs108@outlook.com)
 * @version 1.0
 * @date 2020-10-09
 * @par GitHub
 * https://github.com/czs108/
 */

export module injector_interface;

/**
 * The interface of a Dll injector.
 */
export class Injector {
public:
    virtual ~Injector() = default;

    /**
     * Injection.
     */
    virtual void Inject() = 0;
};